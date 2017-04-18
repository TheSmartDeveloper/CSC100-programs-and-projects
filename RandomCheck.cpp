/****************************************************************
	RandomCheck.cpp
	Author : Kevin George
	Date Written: 1-31-2017
	Class : CSC100AA
	Brief Description: This program will essentially do a coin toss the number of times a user specifies 		and print out the statistics on how many times a value appeared.
*/
#include <iostream>		//needed for cout, cin
#include <iomanip>
#include <cstdlib>		//needed for rand() and srand()
#include <ctime>		//needed for time functions
using namespace std;

int main()
{
    
	int noOfValues = 0;     //user is prompted for this
	int value = 0;		    //randomly generated in the for loop. is either 1 or 2
	int numberOfOnes = 0;   //number of 1s generated
	int numberOfTwos = 0;   //number or 2s generated
	

	//prime the random number generator so it is ready to go 
	unsigned seed = time(0);
	srand(seed);
	
	cout << "Enter the number of values to generate : ";
	cin >> noOfValues;
	
	//inside a "for" loop randomly generate a 1 or 2  and count the number of 1's and 2's
	//the number of times the loop iterates is determined by the number in noOfValues
//	while(cin.fail())
//	{
//		cout << "please use an integer value greater than 0 (or type 0 to quit)" << endl;
//		cin.clear();
//		cin.ignore();
//		cin >> noOfValues;
//	}
	while(noOfValues > 0)
	{
		for(int ii = 1; ii <= noOfValues; ii++)
		{
			value = 1 + rand() % 2;
			if(value == 1)
			{
				numberOfOnes++;
			}
			else
			{
				numberOfTwos++;
			}
		}
		
		//display the statistics.  no changes needed
		cout << fixed << showpoint << setprecision(2);
		cout << "Ones generated: " << numberOfOnes << "\tPercent: ";
		cout << static_cast<double>(numberOfOnes) / noOfValues * 100 <<  "%" << endl;

		cout << "Twos generated: " <<  numberOfTwos << "\tPercent: ";
		cout << static_cast<double>(numberOfTwos) / noOfValues * 100  << "%" << endl;;
	
		cout << "WOW! " << endl << endl;
		numberOfOnes = 0;
		numberOfTwos = 0;
		
		cout << "Enter the number of values to generate : ";
		cin >> noOfValues;
	}
	cout << "terminating the program..." << endl;
	
//	system("pause");
//	return 0;
}

/*
	Enter the number of values to generate : 1000000
	Ones generated: 501057	Percent: 50.11%
	Twos generated: 498944	Percent: 49.89%
	WOW!
	
	Enter the number of values to generate : 0
	terminating the program...
	
	Press any key to continue . . .
*/
