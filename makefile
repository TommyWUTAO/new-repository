CXX = g++
CXXFLAGS = -std=c++17 -Wall

TARGET = game

OBJS = main.o Game.o Robot.o Goal.o Obstacle.o Helper.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJS) $(TARGET)