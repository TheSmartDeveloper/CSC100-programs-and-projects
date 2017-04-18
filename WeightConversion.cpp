// Program ID: WeightConversion
// Author: Kevin George
// Date Written: 1-30-2017
// Class : CSC100AA
// Brief Description:
// This program prompts the user for a weight in pounds
// and converts the weight to kilograms.
// kilograms = pounds / 2.21

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double pounds, kilograms;

	cout << "what is the weight in pounds? " << endl;
	cin >> pounds;

	kilograms = pounds / 2.21;

	if (pounds > 1 || pounds < 1)
	{
		cout << "the weight is " << pounds << " pounds or " << kilograms << " kilogram" << endl;
	}
	else if (kilograms > 1 || kilograms < 1)
	{
		cout << "the weight is " << pounds << " pound or " << kilograms << " kilograms" << endl;
	}
	else if (pounds > 1 && kilograms > 1 || pounds < 1 && kilograms < 1)
	{
		cout << "the weight is " << pounds << " pounds or " << kilograms << " kilograms" << endl;
	}
	else
	{
		cout << "the weight is " << pounds << " pound or " << kilograms << " kilogram" << endl;
	}
	system("pause");
	return 0;
}

/*
what is the weight in pounds?
1
the weight is 1 pound or 0.452489 kilogram
Press any key to continue . . .

*/
