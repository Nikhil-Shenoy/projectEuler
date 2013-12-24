#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// Problem Description: What is the largest prime factor of the number 600851475143?

/* Approach: I first want to get the factors of the number that was input. 
I can do this by dividing the input by each number between 2 and the square root of the input. 
I can do this because if n = a*b, then both a and b cannot exceed the square root of the input. 
Every time I find a factor of the input, I put it into vector. 
Once all the factors are found, I iterate through the vector and remove all the composite numbers. 
After this is done, the largest prime factor should be at the end of the vector.
*/

//Solution: The largest prime factor of 600851475143 is 6857

int main()
{

	// Get the input from the user
	double input;
	cout << "Enter the input you would like to test: ";
	cin >> input;


	// get the ceiling of the square root of the number
	int check = ceil(sqrt(input));	
	vector<int> choices; // initialize vector
	double n = 2;

	while(n != check+1) // Loop that stores the factors into the vector
	{
		double temp = input/n;
		double temp2 = floor(temp);
		
		if((temp - temp2) == 0)
			choices.push_back(n);

		n++;
	}	

	// loop that removes all the composite factors from the vector
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
		
	// displaying the vector just to see what it contains	
	cout << "These are the contents of the vector: " << endl;	
	for(vector<int>::iterator it = choices.begin(); it != choices.end(); it++)
	{
		cout << *it << endl;
	}

	cout << endl;

	cout << "The largest prime factor of " << input << " is " << choices[choices.size() - 1] << endl;
}





















