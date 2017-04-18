/*
	Project Name: Functions
	Author Name: Kevin George
	Date Written: March 6th, 2017
	Class: CSC100AA
	Brief Description: This program will take the wholesale value (provided by the user) and calculate the
	final price using the markup value (also provided by the user). These actions are seperated into
	functions to simplify the program.
*/

#include<cstdlib>
#include<string>
#include<iostream>
#include<iomanip>
#include<algorithm>

using namespace std;
void calculateRetailPrice(double wholesaleCost, double markupPercentage);
int main()
{
	double costWholesale;
	double percentageOfMarkup;
	double doubleInfinity = std::numeric_limits<double>::infinity();
	string doOver = "Y";
	do
	{
		cout << "Enter the item's wholesale cost: $";
		cin >> costWholesale;
		cout << "Enter the item's markup percentage (e.g. 15.0): ";
		cin >> percentageOfMarkup;
		while(costWholesale < 0 || percentageOfMarkup < 0 || cin.fail())
		{
			cin.clear();
	 		cin.ignore(999,'\n');
			cout << "That does not work\n" << endl;
			cout << "Enter the item's wholesale cost: $";
			cin >> costWholesale;
			cout << "Enter the item's markup percentage (e.g. 15.0): ";
			cin >> percentageOfMarkup;
		}
		
		calculateRetailPrice(costWholesale, percentageOfMarkup);
		cout << endl;
		cout << "Do you want to try again? (Y or N): ";
		cin >> doOver;
		transform(doOver.begin(), doOver.end(), doOver.begin(), ::toupper);
	}
	while(doOver == "Y");
	
}

void calculateRetailPrice(double wholesaleCost, double markupPercentage)
{
	double markupPercentageConversion = markupPercentage*.01;
	double finalPrice = (wholesaleCost * markupPercentageConversion) + wholesaleCost;
	cout << "The retail price is $" << fixed << setprecision(2) << finalPrice << endl;
}

/*
	Enter the item's wholesale cost: $5
	Enter the item's markup percentage (e.g. 15.0): 100
	The retail price is $10.00
	
	Do you want to try again? (Y or N): y
	Enter the item's wholesale cost: $20
	Enter the item's markup percentage (e.g. 15.0): 10
	The retail price is $22.00
	
	Do you want to try again? (Y or N): y
	Enter the item's wholesale cost: $-50
	Enter the item's markup percentage (e.g. 15.0): 5
	That does not work
	
	Enter the item's wholesale cost: $50
	Enter the item's markup percentage (e.g. 15.0): 5
	The retail price is $52.50
	
	Do you want to try again? (Y or N): n
*/