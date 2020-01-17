CFLAGS=-std=c++11 -g

all: main.cpp TodoList.cpp TodoList.h TodoListInterface.h
	g++ $(CFLAGS) -o todolist main.cpp TodoList.cpp TodoList.h TodoListInterface.h