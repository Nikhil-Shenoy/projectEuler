// Problem: Find the largest palindrome made from the product of two 3-digit numbers

// Approach: start from the product of 999*999. Convert each number into a string, then use a recursive recognition algorithm to find out whether it is a palindrome. Decrement the product and repeat until the palindrom is found

#include <sstream>
#include <iostream>
#include <string>
#include <stack>
#include <queue>
using namespace std;

void checkNumber(string Result, bool &flag)
{
	if((Result.length() == 0) || (Result.length() == 1))
		flag = true;
	else if(Result[0] == Result[Result.size()-1])
	{
		Result.erase(Result.begin());
		Result.erase(Result.end()-1);
		checkNumber(Result,flag);
	}
	else
		flag = false;

}

int main()
{

	int i = 999;
	int j = 999;
	int largest = 0;
	int number;
	bool flag = false;

	while(i > 99)
	{
		while(j > 99) 
		{
			number = i*j;
			
			string Result;
			ostringstream convert;
			convert << number;
			Result = convert.str();

			
			checkNumber(Result,flag);
			j--;
			convert.str("");
			
			if((flag == true) && (number > largest))
				largest = number;
		}
	
		i--;
		j = i;
	}

	cout << "The largest palindrome that is a product of two three-digit numbers is: " << largest << endl;

}


/*
void alternate(string Result, bool flag)
{
	queue<char> myQueue;
	stack<char> myStack;

	for(int i = 0; i < Result.size(); i++)
	{
		myQueue.push(Result[i]);
		myStack.push(Result[i]);
	}

	bool stop = false;
	int i = Result.length();
	while((stop == false) && (i != -1))
	{
		char stackVar = myStack.top();
		char queueVar = myQueue.front();
		myStack.pop();
		myQueue.pop();
			
		i--;

		if(stackVar != queueVar)
		{
			stop = true;
			flag = true;
		}
		cout << "something" << endl;
	}	
}		
*/		

