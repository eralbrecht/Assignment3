using "Checker.h"
using "GenStack.h"
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	//create an instance of the checker
	Checker myCheck;
	char analysis = 'y';
	string filename;
	while (analysis == 'y')
	{
		//open the file we want read
		cout << "input the file name for analysis";
		cin >> filename;
		ifsteam inputfile;
		inputfile.open(filename);
		//create an instance of the checker
		Checker myCheck;
		if (inputfile)
		{
			myCheck.synCheck(inputfile);
		}
		else()
		{
			cout << "that file doesnt exist"
		}
		cout << "run another file? y or n";
		cin >> analysis;
	}
}