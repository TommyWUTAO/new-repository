# Workshop Makefile

# 默认目标
all: workshop

# 生成可执行文件的规则
workshop: main.o workshop.o
	g++ -o workshop main.o workshop.o

# 生成 main.o 的规则
main.o: main.cpp workshop.h
	g++ -c main.cpp

# 生成 workshop.o 的规则
workshop.o: workshop.cpp workshop.h
	g++ -c workshop.cpp

# 运行程序的规则
run: workshop
	./workshop

# 清理生成文件的规则
clean:
	rm -f workshop main.o workshop.o