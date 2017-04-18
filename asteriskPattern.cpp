/*
	Project Name: Asterisk Pattern
	Author Name: Kevin George
	Date Written: March 3rd, 2017
	Class: CSC100AA
	Brief Description: This program will print out asterisks on each line growing to a max number set by the user then decreasing each following line. (it's kind of difficult to explain, you should just run the program and see how it works).
*/
#include<cstdlib>
#include<string>
#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
int main()
{
	int max;
	do
	{
		cout << "Enter max number of asterisks (1 - 10. 0 to quit): ";
		cin >> max;
		
		while((max < 0 || max > 10) || (cin.fail()))
		{
			cin.clear();
	 		cin.ignore(999,'\n');
			cout << "Error: Enter a number in the range 1 - 10 (0 to quit): ";
			cin >> max;
		}
		if(max >=1 || max <= 10)
		{
			for (int row = 1; row <= max; row++)
			{
    		 	for (int col = 1; col <= row ; col++)
     			{
        			cout << "*\t";
		     	}
    		 	cout << endl;
			}
			for (int row = max-1; row >= 1; row--)
			{
    	 		for (int col = row-1; col >= row-row; col--)
     			{
        			cout << "*\t";
	     		}
    	 		cout << endl;
			}
		}
	}
	while(max != 0);
	cout << "Farewell & Fair Weather" << endl;
	return 0;
}

/*	------------------------------Output------------------------------
	Enter max number of asterisks (1 - 10. 0 to quit): 4
	*	
	*	*	
	*	*	*	
	*	*	*	*	
	*	*	*	
	*	*	
	*	
	Enter max number of asterisks (1 - 10. 0 to quit): 12
	Error: Enter a number in the range 1 - 10 (0 to quit): 3
	*	
	*	*	
	*	*	*	
	*	*	
	*	
	Enter max number of asterisks (1 - 10. 0 to quit): 0
	Farewell & Fair Weather

*/