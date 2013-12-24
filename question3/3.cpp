#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


int main()
{
	double input;
	cout << "Enter the input you would like to test: ";
	cin >> input;

	int check = ceil(sqrt(input));	
	vector<int> choices;
	double n = 2;

	while(n != check+1)
	{
		double temp = input/n;
		double temp2 = floor(temp);
		
		if((temp - temp2) == 0)
			choices.push_back(n);

		n++;
	}	

// insert code to remove all non-prime inputs.

	for(vector<int>::iterator it = choices.end(); it != choices.begin(); it--)
	{

		bool isPrime = true;
		for(int i = 2; i <= sqrt(*it); i++)
		{
			if((*it) % i == 0)
				isPrime = false;
		}
		
		if(isPrime == false)
		{
			choices.erase(it);
		}
	}	
			
	cout << "These are the contents of the vector: " << endl;	
	for(vector<int>::iterator it = choices.begin(); it != choices.end(); it++)
	{
		cout << *it << endl;
	}

	cout << endl;

	cout << "The largest prime factor of " << input << " is " << choices[choices.size() - 1] << endl;
}





















