#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a, userint;
	cout << "Enter a number: " << endl;
	cin >> userint;

	for (a = 0; a <= userint; a++) 
	{
		if (userint == a * a) 
		{
			cout << "Perfect square" << endl;	
		}
	}
	cout << "Not a perfect square" << endl;
	
	system("Pause");
}

Int a and userinput
Output "Enter a number: "
Input userinput

for count a == 0, a <= userinput, a++
	if userinput == a * a
		output "Perfect square"
	else
		output "not a perfect square"
