#ifndef TODOLIST_H_
#define TODOLIST_H_
#include <iostream>
#include "TodoListInterface.h"

class TodoList: public TodoListInterface
{
public:
	TodoList();
	~TodoList();

	void add(string _duedate, string _task);

	int remove(string _task);

	void printTodoList();

	void printDaysTasks(string _date);
	
};

#endif