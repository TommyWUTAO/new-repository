#include <iostream>
#include <unistd.h>   // 用于 usleep 函数
#include <termios.h>  // 用于终端输入控制
#include <cstdlib>    // 用于清屏和生成随机数

using namespace std;

// 网格的宽度和高度
const int width = 20;
const int height = 20;

// 贪吃蛇的初始位置、食物位置、得分
int x, y, foodX, foodY, score;
int tailX[100], tailY[100];  // 贪吃蛇的尾巴坐标数组
int nTail;  // 尾巴的长度
bool gameOver;  // 游戏结束标志

// 枚举方向
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;  // 贪吃蛇的当前方向

// 模拟 _getch() 函数，用于从键盘获取输入字符
char getch() {
    char buf = 0;
    struct termios old = {0};
    if (tcgetattr(STDIN_FILENO, &old) < 0)  // 获取终端属性
        perror("tcsetattr()");
    old.c_lflag &= ~ICANON;  // 关闭缓冲区
    old.c_lflag &= ~ECHO;    // 关闭回显
    if (tcsetattr(STDIN_FILENO, TCSANOW, &old) < 0)  // 设置终端属性
        perror("tcsetattr ICANON");
    if (read(STDIN_FILENO, &buf, 1) < 0)  // 读取字符
        perror("read()");
    old.c_lflag |= ICANON;  // 恢复缓冲区
    old.c_lflag |= ECHO;    // 恢复回显
    if (tcsetattr(STDIN_FILENO, TCSADRAIN, &old) < 0)  // 恢复终端属性
        perror("tcsetattr ~ICANON");
    return buf;
}

// 初始化游戏设置
void Setup() {
    gameOver = false;  // 游戏未结束
    dir = STOP;  // 初始方向停止
    x = width / 2;  // 蛇头的初始位置（在网格中央）
    y = height / 2;
    foodX = rand() % width;  // 随机生成食物的位置
    foodY = rand() % height;
    score = 0;  // 初始得分
    nTail = 0;  // 初始蛇尾长度为 0
}

// 绘制游戏界面
void Draw() {
    system("clear");  // 清屏

    // 绘制顶部边界
    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    // 绘制游戏区域
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0)
                cout << "#";  // 左侧边界

            if (i == y && j == x)
                cout << "O";  // 蛇头位置
            else if (i == foodY && j == foodX)
                cout << "F";  // 食物位置
            else {
                bool print = false;
                for (int k = 0; k < nTail; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        cout << "o";  // 蛇尾的每一节
                        print = true;
                    }
                }
                if (!print)
                    cout << " ";  // 空白区域
            }

            if (j == width - 1)
                cout << "#";  // 右侧边界
        }
        cout << endl;
    }

    // 绘制底部边界
    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    // 显示当前得分
    cout << "Score: " << score << endl;
}

// 处理用户输入
void Inw
}

// 更新游戏逻辑
void Logic() {
    // 存储当前蛇头位置
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;

    // 更新蛇尾的位置，尾巴跟随蛇头移动
    for (int i = 1; i < nTail; i++) {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    // 根据当前方向移动蛇头
    switch (dir) {
        case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;
        case UP:
            y--;
            break;
        case DOWN:
            y++;
            break;
        default:
            break;
    }

    // 处理蛇头碰到墙壁（穿过屏幕）
    if (x >= width) x = 0; else if (x < 0) x = width - 1;
    if (y >= height) y = 0; else if (y < 0) y = height - 1;

    // 检查蛇头是否碰到自己的身体
    for (int i = 0; i < nTail; i++) {
        if (tailX[i] == x && tailY[i] == y)
            gameOver = true;
    }

    // 检查是否吃到食物
    if (x == foodX && y == foodY) {
        score += 10;
        foodX = rand() % width;  // 生成新的食物
        foodY = rand() % height;
        nTail++;  // 增加蛇尾长度
    }
}

int main() {
    Setup();
    while (!gameOver) {
        Draw();  // 绘制当前游戏状态
        Input();  // 处理用户输入
        Logic();  // 更新游戏逻辑
        usleep(100000);  // 控制游戏速度（0.1 秒）
    }
    return 0;
}