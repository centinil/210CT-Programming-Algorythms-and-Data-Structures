#include "stdafx.h"
#include <iostream>

using namespace std;



int main(int n, int i)
{
	//Asking user for an input
	cout << "Enter a number: " << endl;
	cin >> n;

	//Assuming that prime is true
	bool isPrime = true;

	if (n < 2) 
	{
		cout << n << "is not prime" << endl;
	}
	else
	{
		//Checking the square root of user number is greater or equals to 2 + 1
		for (i = 2; i <= sqrt(n); i++) 
		{
			//Check if our number has remainder of 0 
			if (n % i == 0)
			{
				isPrime = false;
			}
		}
		//Check if the prime is true or false
		if (isPrime == true)
		{
			cout << n << " is prime" << endl;
		}
		else
		{
			cout << n << " is not prime" << endl;
		}
	}

	system("Pause");
	return 0;		
}
