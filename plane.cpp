#include <SFML/Graphics.hpp>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iostream>

const int windowWidth = 800;
const int windowHeight = 600;
const float playerSpeed = 5.0f;
const float bulletSpeed = 8.0f;
const float enemySpeed = 3.0f;

struct Bullet {
    sf::RectangleShape shape;
    Bullet(float x, float y) {
        shape.setSize(sf::Vector2f(10, 20));  // 增大子弹尺寸
        shape.setPosition(x, y);
        shape.setFillColor(sf::Color::Yellow); // 更明显的子弹颜色
    }
};

struct Enemy {
    sf::Sprite sprite;
    Enemy(float x, float y, const sf::Texture& texture) {
        sprite.setTexture(texture);
        sprite.setPosition(x, y);
    }
};

int main() {
    std::srand(static_cast<unsigned>(std::time(0)));

    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "Airplane Shooter");
    window.setFramerateLimit(60);

    // 加载玩家飞机的纹理
    sf::Texture playerTexture;
    if (!playerTexture.loadFromFile("/Users/tommywu/Desktop/player.png")) {
        std::cerr << "Failed to load image \"player.png\". Reason: Unable to open file" << std::endl;
        return -1;
    }

    // 加载敌机的纹理
    sf::Texture enemyTexture;
    if (!enemyTexture.loadFromFile("/Users/tommywu/Desktop/enemy.png")) {
        std::cerr << "Failed to load image \"enemy.png\". Reason: Unable to open file" << std::endl;
        return -1;
    }

    // 玩家飞机
    sf::Sprite player;
    player.setTexture(playerTexture);
    player.setScale(0.1f, 0.1f);  // 缩小玩家飞机的尺寸
    player.setPosition(windowWidth / 2 - player.getGlobalBounds().width / 2, windowHeight - player.getGlobalBounds().height - 10);

    // 子弹列表
    std::vector<Bullet> bullets;

    // 敌机列表
    std::vector<Enemy> enemies;

    // 子弹发射计时器
    sf::Clock bulletClock;

    // 敌机生成计时器
    sf::Clock enemyClock;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // 玩家移动
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && player.getPosition().x > 0) {
            player.move(-playerSpeed, 0);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && player.getPosition().x + player.getGlobalBounds().width < windowWidth) {
            player.move(playerSpeed, 0);
        }

        // 发射子弹
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
            if (bulletClock.getElapsedTime().asSeconds() > 0.2f) { // 控制射击频率
                std::cout << "Firing bullet!" << std::endl;  // 调试信息
                bullets.push_back(Bullet(player.getPosition().x + player.getGlobalBounds().width / 2 - 2.5f, player.getPosition().y));
                bulletClock.restart();
            }
        }

        // 更新子弹位置
        for (size_t i = 0; i < bullets.size(); i++) {
            bullets[i].shape.move(0, -bulletSpeed);  // 子弹向上移动
            if (bullets[i].shape.getPosition().y < 0) {
                bullets.erase(bullets.begin() + i);  // 如果子弹超出屏幕，移除子弹
                i--;
            }
        }

        // 生成敌机
        if (enemyClock.getElapsedTime().asSeconds() > 1.0f) {  // 每1秒生成一个敌机
            float enemyX = std::rand() % (windowWidth - enemyTexture.getSize().x);
            enemies.push_back(Enemy(enemyX, 0, enemyTexture));
            enemies.back().sprite.setScale(0.1f, 0.1f);  // 缩小敌机尺寸
            enemyClock.restart();
        }

        // 更新敌机位置
        for (size_t i = 0; i < enemies.size(); i++) {
            enemies[i].sprite.move(0, enemySpeed);  // 敌机向下移动
            if (enemies[i].sprite.getPosition().y > windowHeight) {
                enemies.erase(enemies.begin() + i);  // 敌机超出屏幕，移除敌机
                i--;
            }
        }

        // 检测碰撞（子弹与敌机）
        for (size_t i = 0; i < bullets.size(); i++) {
            for (size_t j = 0; j < enemies.size(); j++) {
                if (bullets[i].shape.getGlobalBounds().intersects(enemies[j].sprite.getGlobalBounds())) {
                    bullets.erase(bullets.begin() + i);  // 子弹命中敌机，移除子弹
                    enemies.erase(enemies.begin() + j);  // 移除敌机
                    i--;
                    break;
                }
            }
        }

        // 渲染
        window.clear();

        // 绘制玩家
        window.draw(player);

        // 绘制子弹
        for (const auto& bullet : bullets) {
            window.draw(bullet.shape);
        }

        // 绘制敌机
        for (const auto& enemy : enemies) {
            window.draw(enemy.sprite);
        }

        window.display();
    }

    return 0;
}