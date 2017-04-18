/*
	Project Name: Show Me The Money
	Author Name: Kevin George
	Date Written: March 1st, 2017
	Class: CSC100AA
	Brief Description: This program calculates how much a person earns in a month if their pay is doubling 		each day.
*/

#include<cstdlib>
#include<string>
#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
int main()
{
	int daysWorked;
	double dailyPay = .01;
	double monthlyPay = 0.01;
	string tryAgain = "Y";
	
	
	do
	{
		cout << "How many days did the employee work this month? ";
		cin >> daysWorked;
		
		while((daysWorked < 1 || daysWorked > 31) || (cin.fail()))
		{
			cin.clear();
	 		cin.ignore(999,'\n');
			cout << "The number of days should be a positive integer between 1 or 31" << endl;
			cout << "Please re-enter days worked: ";
			cin >> daysWorked;
		}
	
		if((daysWorked >= 1 || daysWorked <= 31))
		{
			int i = 1;
			cout << "\nDay\t\t Pay" << endl;
			cout << "--------------------" << endl;
			cout << i << "\t\t" << fixed << setprecision(2) << dailyPay << endl;
			for(i = 2; i <= daysWorked; i++)
			{
				cout << i << "\t\t" << fixed << setprecision(2) << (dailyPay *= 2) << endl;
				monthlyPay = monthlyPay + dailyPay;
			}
			cout << "--------------------" << endl;
			cout << "Total $         ";
			cout << monthlyPay << fixed << setprecision(2) << endl;
			dailyPay = 0.01;
			monthlyPay = 0.01;
		}
		cout << "Do you want to try again? (Y or N)? ";
		cin >> tryAgain;
		cout << "\n";
		transform(tryAgain.begin(), tryAgain.end(), tryAgain.begin(), ::toupper);
	}
	while(tryAgain == "Y");
	cout <<"Thank you for using the Employee Pay Calculator. Farewell & Fair Weather" << endl;
	system("pause");
	return 0;
}

/*	Output 
	How many days did the employee work this month? 3

	Day		 Pay
	--------------------
	1		0.01
	2		0.02
	3		0.04
	--------------------
	Total $         0.07
	Do you want to try again? (Y or N)? y
	
	How many days did the employee work this month? 45
	The number of days should be a positive integer between 1 or 31
	Please re-enter days worked: -2
	The number of days should be a positive integer between 1 or 31
	Please re-enter days worked: 3
	
	Day		 Pay
	--------------------
	1		0.01
	2		0.02
	3		0.04
	--------------------
	Total $         0.07
	Do you want to try again? (Y or N)? n
	
	Thank you for using the Employee Pay Calculator. Farewell & Fair Weather

*/
	
	