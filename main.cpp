using namespace std;
using "GenStack.h"
int main()
{
	countingStack = GenStack::GenStack();
	int lineCount = 0;
	for (i = 0; i < analysisString.size(); i++)
	{
		char currLett = analysisString[i];
		if (currLett == '\n')
		{
			lineCount += 1;
		}
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
				//quitfunction
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
			}
		}
	}
	if (countingStack.isEmpty())
	{
		//quitfunction
	}
	else
	{
		//quitfunction with a pop
	}
}