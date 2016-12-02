#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main() 
{
	string userStr;
	void removeVowel(string userStr);

	cout << "Enter a word or sentence: ";
	cin >> userStr;

	cout << removeVowel << endl;
}

bool isVowel(char c) 
{
	if ((c == 'A') || (c == 'E') || (c == 'I') || (c == 'O') || (c == 'U')
		|| (c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u'))
	{
		cout << isVowel << endl;
		return true;
	}
	else
	{
		return false;
	}

	system("Pause");
	return 0;
}

