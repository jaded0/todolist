#include <iostream>
#include "TodoList.h"

using namespace std;

int main(int argc, char *argv[]) 
{
  	cout << "argc "<<argc<<" argv[0] "<<argv[1]<<endl;
  	string function = argv[1];

  	TodoList list;

	if (function == "add")
	{
		list.add("duedate","task");

	} else if (function == "remove")
	{
  		
	} else if (function == "printList")
	{
  	/* code */
	} else if (function == "printDay")
	{

	} else
	{
  		cout << "not valid input sorry";
	}
}