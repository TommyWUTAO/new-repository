# 定义编译器和编译选项
CXX = g++
CXXFLAGS = -Wall -std=c++17

# 定义可执行文件和目标文件
TARGETS = program1 program2 program3 

OBJS1 = main-1.o
OBJS2 = main-2.o
OBJS3 = main-3.o


# 编译所有目标文件
all: $(TARGETS)

# 编译程序1
program1: $(OBJS1)
	$(CXX) $(OBJS1) -o program1

# 编译程序2
program2: $(OBJS2)
	$(CXX) $(OBJS2) -o program2

# 编译程序3
program3: $(OBJS3)
	$(CXX) $(OBJS3) -o program3


# 生成 .o 文件的规则
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 清理目标
clean:
	rm -f *.o $(TARGETS)