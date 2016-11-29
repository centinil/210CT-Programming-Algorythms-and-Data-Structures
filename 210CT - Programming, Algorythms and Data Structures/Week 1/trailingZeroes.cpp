#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
//Trailing 0s in n! = (n/5) + (n/25) + (n/125)

	int count = 0; //Count initializing by 0
	int userNumber; //The number the user will input

	cout << "Enter a factorial number:\n";
	cin >> userNumber;

	for (int i = 5; (userNumber / i) >= 1; i *= 5) 
	{
		count += userNumber / i;   //loop counts the number of trailing zeros
	}

	cout << "The number of trailing 0s in your number is: " << count << "\n";
	

	system("Pause"); //Not close the console

	return 0;
}

