#include<cstdlib>
#include<string>
#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
int main()
{
	//double myExams[5];
	double myExams[5] = {92.3,82.0,98.4,91.0};
	cout << myExams[1] << endl;
	int sum = 0;
	for(int i = 0; i <= 4; i++)
	{
		cout << myExams[i] << endl;
	}
	
	for(int ii = 0; ii <= 4; ii++)
	{
		sum = sum + myExams[ii];
		cout << "sum is: " << sum << endl;
	}
	
	myExams[4] = 99.9;
	double exam4 = myExams[4];
	cout << "exam 4: " << exam4 << endl;
	
	cout << "My Best Exam Score: " << myExams[5] << endl;
}