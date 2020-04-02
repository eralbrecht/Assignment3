#include "GenStack.h"
//constructor(im really hoping that we never have a nest 500 deep...)
GenStack::GenStack()
{
	myStack = new char[500];
	maxSize = 500;
	top = -1
}
//destructor
GenStack::~GenStack()
{
	delete myStack;
}
void GenStack::push(char data)
{
	if (top > 500)
	{
		//check if full before inserting
		cout << "the stack is full -- that doesnt work";
	}
	else
	{
		myStack[++top] = data;
		myStack[++top] = data;
		//each time we increment and add an element our top will shift over 1
	}
}
char GenStack::peek()
{
	if (top < 0)
	{
		cout << "the stack is empty -- that doesnt work";
		//check if empty before popping
	}
	else
	{
		return myStack[top];
		//when you evaluate you have to move where the top value is so when we look at the top were ignoring stuff over the top value
	}
}
char GenStack::pop()
{
	if (top < 0)
	{
		cout << "the stack is empty -- that doesnt work";
		//check if empty before popping
	}
	else
	{
		return myStack[top--];
		//when you evaluate you have to move where the top value is so when we look at the top were ignoring stuff over the top value
	}
}
int GenStack::size()
{
	return (top + 1);
}
bool GenStack::isFull()
{
	return(top == maxSize - 1);
}
bool GenStack::isEmpty()
{
	return (top == -1);
}