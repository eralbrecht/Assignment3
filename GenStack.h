//2/25/2020
//build a generic stack (he called it a vanilla stack)
#include <iostream>
#include<fstream>
using namespace std;
class GenStack
{
public:
	GenStack(); //default constructor
	~GenStack(); //destructor
	//functions
	//were making a stack that will store chars
	void push(char data); //void beacuse its returning nothing
	char pop();//removes and returns a charachter
	//int size();
	int top;
	//helper functions
	bool isFull();
	bool isEmpty();
	char peek();
	char myStack[500];
	int maxSize;//max size of myStack
	int top;//variable to keep track  of indicies representing the top of out stack
	//char *myStack;//declare a pointer that i will assign later but now it has a 
};