#include "stdafx.h"
#include <iostream>

using namespace std;

int main() {

	char reverseSentence[] = "This is awesome";
	cout << reverseSentence << '\n';

	//Determine the length of the string
	size_t sentenceLength = 0, a, b;
	while (reverseSentence[sentenceLength])
		++sentenceLength;

	//Reversing the entire sequence
	a = 0, b = sentenceLength;
	while (a < b--)
	{
		char reverseSequence = reverseSentence[a];
		reverseSentence[a++] = reverseSentence[b];
		reverseSentence[b] = reverseSequence;
	}

	cout << reverseSentence << endl;
	system("Pause");
}

