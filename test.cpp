#include<cstdlib>
#include<string>
#include<iostream>
#include<iomanip>
#include<algorithm>

using namespace std;

//4
//e.4
//4..0
//4.0

void check(string one, string two, string three, string four);
int main()
{
	string stringThing = "3.4 47 test 12";
	string newStringThing = stringThing + " ";
	int stringLength = newStringThing.length();
	int spacePoint = 0;
	int prevPoint = 0;
	int b = 1;
	string Fname;
	string Mname;
	string Lname;
	string Oname;
	string outString;
	for(int a = prevPoint; a <= stringLength; a++)
	{
		if(newStringThing[a] == ' ')
		{
			spacePoint = a;
			outString = newStringThing.substr(prevPoint, (spacePoint-prevPoint));
			//cout << outString << endl;
			switch(b)
			{
				case 1:
					Fname = outString;
					b++;
					break;
				case 2:
					Mname = outString;
					b++;
					break;
				case 3:
					Lname = outString;
					b++;
					break;
				case 4:
					Oname = outString;
					break;
				default:
					cout << "something broke" << endl;
					break;
			}
			prevPoint = spacePoint;
		}
	}
	check(Fname, Mname, Lname, Oname);
	cout << Fname << "," << Mname << "," << Lname << "," << Oname << endl;
}
void check(string one, string two, string three, string four)
{
	int pointCheck = 0;
	bool isValid = false;
	bool onPoint = false;
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	for(int i = 0; i <= one.length(); i++)
	{
		if((one[i] >= 48 && one[i] <= 56))
		{
			isValid = true;
		}
		if(one[i] == '.')
		{
			onPoint = true;
		}
	}
	if(isValid == true && onPoint == false)
	{
		std::stringstream(one) >> num1;
		cout << one << " " << num1 << endl;
	}
	else
	{
		cout << "the value is invalid" << endl; 
	}
	isValid = false;
	onPoint = false;
	//----------------------------------------------------------------------------------------------
	for(int i = 0; i <= two.length(); i++)
	{
		if((two[i] >= 48 && two[i] <= 56))
		{
			isValid = true;
		}
		if(two[i] == '.')
		{
			onPoint = true;
		}
	}
	if(isValid == true && onPoint == false)
	{
		std::stringstream(two) >> num2;
		cout << two << " " << num2 << endl;
	}
	else
	{
		cout << "the value is invalid" << endl; 
	}
	isValid = false;
	onPoint = false;
	//-----------------------------------------------------------------------------------------------
	for(int i = 0; i <= three.length(); i++)
	{
		if((three[i] >= 48 && three[i] <= 56))
		{
			isValid = true;
		}
		if(three[i] == '.')
		{
			onPoint = true;
		}
	}
	if(isValid == true && onPoint == false)
	{
		std::stringstream(three) >> num3;
		cout << three << " " << num3 << endl;
	}
	else
	{
		cout << "the value is invalid" << endl; 
	}
	isValid = false;
	onPoint = false;
	//-----------------------------------------------------------------------------------------------
	for(int i = 0; i <= four.length(); i++)
	{
		if((four[i] >= 48 && four[i] <= 56))
		{
			isValid = true;
		}
		if(four[i] == '.')
		{
			onPoint = true;
		}
	}
	if(isValid == true && onPoint == false)
	{
		std::stringstream(four) >> num4;
		cout << four << " " << num4 << endl;
	}
	else
	{
		cout << "the value is invalid" << endl; 
	}
	isValid = false;
	onPoint = false;
}