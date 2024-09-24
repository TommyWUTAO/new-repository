#include <SFML/Graphics.hpp>
#include <deque>
#include <cstdlib>
#include <ctime>

const int blockSize = 20;
const int width = 400;
const int height = 400;

enum Direction { Up, Down, Left, Right };

struct SnakeSegment {
    int x, y;
    SnakeSegment(int xPos, int yPos) : x(xPos), y(yPos) {}
};

class Snake {
public:
    Snake() {
        reset();
    }

    void reset() {
        snake.clear();
        snake.push_back(SnakeSegment(width / blockSize / 2, height / blockSize / 2));
        dir = Direction::Right;
        grow = false;
    }

    void move() {
        SnakeSegment newSegment = snake.front();

        if (dir == Direction::Up) newSegment.y--;
        if (dir == Direction::Down) newSegment.y++;
        if (dir == Direction::Left) newSegment.x--;
        if (dir == Direction::Right) newSegment.x++;

        if (grow) {
            grow = false;
        } else {
            snake.pop_back(); // 移除尾部
        }

        snake.push_front(newSegment); // 添加新的头部
    }

    void growSnake() {
        grow = true;
    }

    bool checkCollision() const {
        const SnakeSegment& head = snake.front();

        // 检查边界碰撞
        if (head.x < 0 || head.x >= width / blockSize || head.y < 0 || head.y >= height / blockSize) {
            return true;
        }

        // 检查自我碰撞
        for (size_t i = 1; i < snake.size(); ++i) {
            if (snake[i].x == head.x && snake[i].y == head.y) {
                return true;
            }
        }

        return false;
    }

    const std::deque<SnakeSegment>& getSnake() const {
        return snake;
    }

    void setDirection(Direction newDir) {
        // 防止蛇直接反向
        if ((dir == Direction::Up && newDir != Direction::Down) ||
            (dir == Direction::Down && newDir != Direction::Up) ||
            (dir == Direction::Left && newDir != Direction::Right) ||
            (dir == Direction::Right && newDir != Direction::Left)) {
            dir = newDir;
        }
    }

private:
    std::deque<SnakeSegment> snake;
    Direction dir;
    bool grow;
};

class Food {
public:
    Food() : position(0, 0) {  // 显式初始化 position
        respawn();
    }

    void respawn() {
        position.x = std::rand() % (width / blockSize);
        position.y = std::rand() % (height / blockSize);
    }

    const SnakeSegment& getPosition() const {
        return position;
    }

private:
    SnakeSegment position;
};

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    sf::RenderWindow window(sf::VideoMode(width, height), "SFML Snake Game");
    window.setFramerateLimit(10); // 控制蛇的速度

    Snake snake;
    Food food;

    sf::RectangleShape snakeBlock(sf::Vector2f(blockSize - 1, blockSize - 1));
    snakeBlock.setFillColor(sf::Color::Green);

    sf::RectangleShape foodBlock(sf::Vector2f(blockSize - 1, blockSize - 1));
    foodBlock.setFillColor(sf::Color::Red);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();

            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::Up)
                    snake.setDirection(Direction::Up);
                if (event.key.code == sf::Keyboard::Down)
                    snake.setDirection(Direction::Down);
                if (event.key.code == sf::Keyboard::Left)
                    snake.setDirection(Direction::Left);
                if (event.key.code == sf::Keyboard::Right)
                    snake.setDirection(Direction::Right);
            }
        }

        // 移动蛇
        snake.move();

        // 检查蛇是否吃到食物
        if (snake.getSnake().front().x == food.getPosition().x && snake.getSnake().front().y == food.getPosition().y) {
            snake.growSnake();
            food.respawn();
        }

        // 检查碰撞
        if (snake.checkCollision()) {
            snake.reset();
        }

        // 渲染
        window.clear();

        // 画蛇
        for (const auto& segment : snake.getSnake()) {
            snakeBlock.setPosition(segment.x * blockSize, segment.y * blockSize);
            window.draw(snakeBlock);
        }

        // 画食物
        foodBlock.setPosition(food.getPosition().x * blockSize, food.getPosition().y * blockSize);
        window.draw(foodBlock);

        window.display();
    }

    return 0;
}