/*
	Project Name: Functions
	Author Name: Kevin George
	Date Written: March 1st, 2017
	Class: CSC100AA
	Brief Description: This program calculates how much a person earns in a month if their pay is doubling 		each day.
*/

#include<cstdlib>
#include<string>
#include<iostream>
#include<iomanip>
#include<"insertionsort.h">

using namespace std;
double averageOfThreeNumbers(int N1, int N2, int N3);
void oddOrEven(int N1, int N2, int N3);

int main()
{
	int num1;
	int num2;
	int num3;
	
	cout << "Enter three numbers seperated by spaces: " << endl;
	cin >> num1 >> num2 >> num3;
	
	cout << "The average of " << num1 << "," << num2 << ", and " << num3 <<" is " << averageOfThreeNumbers(num1, num2, num3) << endl;
	oddOrEven(num1, num2, num3);
	return 0;
}
double averageOfThreeNumbers(int N1, int N2, int N3)
{
	double avg = 0.0;
	string thisString = "The average is: ";
	avg = (static_cast <double> (N1) + static_cast <double> (N2) + static_cast <double> (N3))/3;
	return avg;
}
void oddOrEven(int N1, int N2, int N3)
{
	if(N1 % 2 == 0)
	{
		cout << "N1: " << N1 << " is even" << endl;
	}
	else
	{
		cout << "N1: " << N1 << " is odd" << endl;
	}
	
	if(N2 % 2 == 0)
	{
		cout << "N2: " << N2 << " is even" << endl;
	}
	else
	{
		cout << "N2: " << N2 << " is odd" << endl;
	}
	
	if(N3 % 2 == 0)
	{
		cout << "N3: " << N3 << " is even" << endl;
	}
	else
	{
		cout << "N3: " << N3 << " is odd" << endl;
	}
}