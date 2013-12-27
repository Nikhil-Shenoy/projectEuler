// Problem: Find the largest palindrome made from the product of two 3-digit numbers

// Approach: start from the product of 999*999. Convert each number into a string, then use a recursive recognition algorithm to find out whether it is a palindrome. Decrement the product and repeat until the palindrom is found

#include <sstream>
#include <iostream>
using namespace std;

int main()
{
	int top = 999*999;	
	bool flag = false;

	while(flag == false)
	{
		string Result;

		ostringstream convert;

		convert << number;

		Result = convert.str();

		checkNumber(Result,flag);
	}
}

bool checkNumber(int number, bool &flag)
{
	if(Result.length() == 0 || Result.length() == 1)
		return true;
	else if(Result.begin() != Result.end())
	{
		return false;
	}
	else
	{
		Result.erase(Result.begin());
		Result.erase(Result.end());
		return checkNumber(Result);
	}
}
