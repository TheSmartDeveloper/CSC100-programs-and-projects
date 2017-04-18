#include<cstdlib>
#include<string>
#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
void fillArray(int *a);
int main()
{
	int *myExams = NULL;
	myExams = new int[4];
	fillArray(myExams);
	return 0;
}
void fillArray(int *a)
{
	unsigned seed = time(0);
	srand(seed);
	for(int i = 0; i <=3; i++)
	{
		a[i] = 0 + rand() % 101;
		cout << a[i] << endl;
	}
}