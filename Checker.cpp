using namespace std;
using "GenStack.h"
using "Checker.h"
#include <iostream>
Checker::Checker()
{
	//constructor
}
Checker::~Checker()
{
	//destructor
}
int Checker::synCheck(ifstream readFile)
{
	//countingStack = GenStack::GenStack();
	GenStack countingStack;
	//countingStack.GenStack(500);
	int lineCount = 0;
	//int maxSize = 500;
	//for (i = 0; i < analysisString.size(); i++)
	while(getline(readFile, currString))
	{
		//char currString = analysisString[i];
		/*if (currLett == '\n')
		{
			lineCount += 1;
		}*/
		linecount += 1;
		for (i = 0; i < currString.size(); i++)
		{
			if (currLett == '[' || currLett == '{' || currLett == '(')
			{
				countingStack.push(currLett);
			}
			if (currLett == ']')
			{
				if (countingStack.peek() == '[')
				{
					countingStack.pop()
				}
				else
				{
					//quitfunction
					cout << "line : " << lineCount << endl;
					cout << "there is a ] that was never opened"
				}
			}
			if (currLett == '}')
			{
				if (countingStack.peek() == '{')
				{
					countingStack.pop()
				}
				else
				{
					//return (1)
					cout << "line : " << lineCount << endl;
					cout<<"there is a } that was never opened"
				}
			}
			if (currLett == ')')
			{
				if (countingStack.peek() == '(')
				{
					countingStack.pop()
				}
				else
				{
					//quitfunction
					cout << "line : " << lineCount << endl;
					cout << "there is a ) that was never opened"
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