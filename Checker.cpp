#include <iostream>
using namespace std;
#include "GenStack.h"
#include "Checker.h"
#include<fstream>
Checker::Checker()
{
	//constructor
}
Checker::~Checker()
{
	//destructor
}
void Checker::synCheck(ifstream &readFile)
{
	//countingStack = GenStack::GenStack();
	GenStack countingStack;
	//countingStack.GenStack(500);
	int lineCount = 0;
	string currString;
	char currLett;
	//int maxSize = 500;
	//for (i = 0; i < analysisString.size(); i++)
	while(getline(readFile, currString))
	{
		//char currString = analysisString[i];
		/*if (currLett == '\n')
		{
			lineCount += 1;
		}*/
		lineCount += 1;
		for (int i = 0; i < currString.size(); i++)
		{
			currLett = currString[i];
			//this will push all the open brackets to the stack in order of encounter
			if (currLett == '[' || currLett == '{' || currLett == '(')
			{
				countingStack.push(currLett);
			}

			//this will pop all the close brackets if they match an open bracket on the stack
			if (currLett == ']')
			{
				if (countingStack.peek() == '[')
				{
					countingStack.pop();
				}
				else
				{
					//quitfunction
					cout << "line : " << lineCount << endl;
					cout << "there is a ] that was not the last brace type to be opened";
				}
			}
			if (currLett == '}')
			{
				if (countingStack.peek() == '{')
				{
					countingStack.pop();
				}
				else
				{
					//return (1)
					cout << "line : " << lineCount << endl;
					cout << "there is a } that was not the last brace type to be opened";
				}
			}
			if (currLett == ')')
			{
				if (countingStack.peek() == '(')
				{
					countingStack.pop();
				}
				else
				{
					//quitfunction
					cout << "line : " << lineCount << endl;
					cout << "there is a ) that was not the last brace type to be opened";
				}
			}
		}
	}
	if (countingStack.isEmpty())
	{
		cout << "your function is fine enough" << endl;
	}
	else
	{
		cout << "reached end of file and " << countingStack.pop() << " was never closed" << endl;
		//quitfunction with a pop
	}
}