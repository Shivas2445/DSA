# This Makefile builds a simple C++ program from main.cpp

CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17
TARGET = myapp
SRC = main.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

check:
	./$(TARGET)
