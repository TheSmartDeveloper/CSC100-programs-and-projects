/*
	Program Name: Two Numbers
	Author: Kevin George
	Date Written: 1-31-2017
	Class : CSC100AA
	Brief Description: For this program the sum, difference, product, and quotient will be taken of the numbers 25 and 75. Integer values will be created for these two and the results of each operation will be stored in integer values
*/

#include <iostream>

using namespace std;
int main()
{
	int seventyFive = 75;
	int twentyFive = 25;
	
	int sum = twentyFive + seventyFive;
	int diff = seventyFive - twentyFive;
	int prod = twentyFive * seventyFive;
	int quot = seventyFive / twentyFive;
	
	cout << "The values are:\t\t" << twentyFive << " and " << seventyFive << "\n\n";
	cout << "\t Sum:\t\t" << sum << endl;
	cout << "\t Difference:\t" << diff << endl;
	cout << "\t Product:\t" << prod << endl;
	cout << "\t Quotient:\t" << quot << endl;
	
	system("pause");
	return 0;
}

/*
The values are:		25 and 75

	 Sum:			100
	 Difference:	50
	 Product:		1875
	 Quotient:		3

Press any key to continue . . .
*/