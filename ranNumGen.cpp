#include<cstdlib>
#include<string>
#include<iostream>
#include<iomanip>
#include<algorithm>
#include <ctime>

using namespace std;

int main()
{
	unsigned seed = time(0);
	srand(seed);
	int value = 0;
	int startVal = 1;					
	//what number will the random number generator start from
	int subsequentVals = 6;			
	//how many more values from (and including 10) will be generated
	for(int i = 0; i <= 10; i++)		
		//make sure to set the max i value
	{
		value = startVal + rand() % subsequentVals;		
		//generate as many subsequent values following and including the start value 
		cout << value
			<< ","				
			//merely so that I can choose to generate a long random number or if I want to delimit each number with a comma
			;
	}
	cout << endl;
	return 0;
}