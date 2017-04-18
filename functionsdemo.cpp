/*
	Project Name: Functions Demo
	Author Name: Kevin George
	Date Written: March 7th, 2017
	Class: CSC100AA
	Brief Description: I don't know when this was supposed to be turned in. I assumed I had done this in 
	class. Either way, I edited it a little bit and moved the actual max comparison to a function. I 	
	believe this is what is wanted...maybe?
*/

#include <iostream>
using namespace std;


void calcMax(int num1, int num2);
int main()
{
	//int maxNum = 0;
	int firstNumber;
	int secondNumber;

	
	cout << "First Integer Number: ";
	cin >> firstNumber;

	cout << "Second Integer Number: ";
	cin >> secondNumber;


	calcMax(firstNumber, secondNumber);
}

void calcMax(int num1, int num2)
{
	int maxNum = 0;
	if (num1 > num2)
	{
		maxNum = num1;
	}
	else
	{
		maxNum = num2;
	}
	cout << "The maximum number = " << maxNum << endl;
}

/*
	First Integer Number: 3
	Second Integer Number: 5
	The maximum number = 5
	
	First Integer Number: 10
	Second Integer Number: 2010
	The maximum number = 2010
	
	First Integer Number: 20
	Second Integer Number: 2
	The maximum number = 20
*/