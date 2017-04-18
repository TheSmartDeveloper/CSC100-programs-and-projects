/*
	Project Name: Star Search
	Author Name: Kevin George
	Date Written: March 8th, 2017
	Class: CSC100AA
	Brief Description: 
*/

#include<cstdlib>
#include<string>
#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;

void getJudgeData(double &score);
void calcScore(double s1, double s2, double s3, double s4, double s5);
double findLowest(double s1, double s2, double s3, double s4, double s5);
double findHighest (double s1, double s2, double s3, double s4, double s5);

int main()
{
	
	string doOver = "Y";
	double toJudge = 0;
	int contestantNumber = 1;
	cout << "Welcome to Star Search" << endl;
	cout << "----------------------" << endl;
	do
	{
		cout << "\nContestant #" << contestantNumber << "\n" << endl;
		
		getJudgeData(toJudge);
		
		cout << "\ndo you want to do this again? ";
		cin >> doOver;
		/*while(doOver != "Y" || doOver != "y" || doOver != "N" || doOver != "n")
		{
			cin.clear();
	 		cin.ignore(999,'\n');
			cout << "is that a yes (Y) or no (N)? ";
			cin >> doOver;
		}*/
		contestantNumber++;
	}
	
	while(doOver == "Y" || doOver == "y");
	cout << "Farewell & Fair weather!" << endl;
	return 0;
}

void getJudgeData(double &score)
{
	double judge1Score = 0;
	double judge2Score = 0;
	double judge3Score = 0;
	double judge4Score = 0;
	double judge5Score = 0;
	for(int judge = 1; judge < 6; judge++)
	{
		
		cout << "********* Judge #" << judge << " *********" << endl;
		cout << "Enter score between 0 and 10: ";
		cin >> score;
		while (score < 0 || score > 10 || cin.fail())
		{
			cin.clear();
	 		cin.ignore(999,'\n');
			cout << "Score must be in the range 0 - 10. Please re-enter score: ";
			cin >> score;
		}
		switch (judge)
		{
			case 1:	judge1Score = score;
					break;
			case 2:	judge2Score = score;
					break;
			case 3: judge3Score = score;
					break;
			case 4: judge4Score = score;
					break;
			case 5: judge5Score = score;
					break;
			default:	cout << "Nothing to set there" << endl;
						break;
		}
	}
	calcScore(judge1Score, judge2Score, judge3Score, judge4Score, judge5Score);
}

/*void calcScore(double s1, double s2, double s3, double s4, double s5)
{
	// I figured there were going to be a lot of comparisons for 5 elements so I looked up how to program insertion sort in C++ and modeled this function to do this. This way it is much easier to get the highest and lowest values.
	double array [5] = {s1,s2,s3,s4,s5};
	for (int i = -1; i < 5; i++)
    {
        double temp = array[i];
        int j = i - 1;
        while (temp < array[j] && j >= 0)
        {
            array[j+1] = array[j];
            --j;
        }
        array[j+1] = temp;
    }
	double average = (array[1] + array[2] + array[3])/3;
	cout << "Low score is " << array[0] << ". High score is " << array[4] << endl;
	cout << "The contestant's talent score is: " << fixed << setprecision(2) << average << endl;
}*/

void calcScore(double s1, double s2, double s3, double s4, double s5)
{
	double low = findLowest(s1,s2,s3,s4,s5);
	double high = findHighest(s1,s2,s3,s4,s5);
	
	double average = ((s1 + s2 + s3 + s4 + s5)-(low + high))/3;
	
	cout << "\nLow score is " << low << ". High score is " << high << endl;
	cout << "This contestant's talent score is " << fixed << setprecision(2) << average << endl;
}
double findLowest(double s1, double s2, double s3, double s4, double s5)
{
	double lowest = 0.0;
	if(s1 < s2 && s1 < s3 && s1 < s4 && s1 < s5)
	{
		lowest = s1;
	}
	else if(s2 < s1 && s2 < s3 && s2 < s4 && s2 < s5)
	{
		lowest = s2;
	}
	else if(s3 < s1 && s3 < s2 && s3 < s4 && s3 < s5)
	{
		lowest = s3;
	}
	else if(s4 < s1 && s4 < s2 && s4 < s3 && s4 < s5)
	{
		lowest = s4;
	}
	else if(s5 < s1 && s5 < s2 && s5 < s3 && s5 < s4)
	{
		lowest = s5;
	}
	else
	{
		
	}
	return lowest;
}

double findHighest(double s1, double s2, double s3, double s4, double s5)
{
	double highest = 0.0;
	if(s1 > s2 && s1 > s3 && s1 > s4 && s1 > s5)
	{
		highest = s1;
	}
	else if(s2 > s1 && s2 > s3 && s2 > s4 && s2 > s5)
	{
		highest = s2;
	}
	else if(s3 > s1 && s3 > s2 && s3 > s4 && s3 > s5)
	{
		highest = s3;
	}
	else if(s4 > s1 && s4 > s2 && s4 > s3 && s4 > s5)
	{
		highest = s4;
	}
	else if(s5 > s1 && s5 > s2 && s5 > s3 && s5 > s4)
	{
		highest = s5;
	}
	else
	{
		
	}
	return highest;
}


/*
	Welcome to Star Search
	----------------------
	
	Contestant #1
	
	********* Judge #1 *********
	Enter score between 0 and 10: 8.1
	********* Judge #2 *********
	Enter score between 0 and 10: 7.5
	********* Judge #3 *********
	Enter score between 0 and 10: 7
	********* Judge #4 *********
	Enter score between 0 and 10: -3
	Score must be in the range 0 - 10. Please re-enter score: 6
	********* Judge #5 *********
	Enter score between 0 and 10: 7.2
	
	Low score is 6. High score is 8.1
	This contestant's talent score is 7.23
	
	do you want to do this again? y
	
	Contestant #2
	
	********* Judge #1 *********
	Enter score between 0 and 10: 4.2
	********* Judge #2 *********
	Enter score between 0 and 10: 12
	Score must be in the range 0 - 10. Please re-enter score: 2
	********* Judge #3 *********
	Enter score between 0 and 10: 3.8
	********* Judge #4 *********
	Enter score between 0 and 10: 2.6
	********* Judge #5 *********
	Enter score between 0 and 10: 1.9
	
	Low score is 1.90. High score is 4.20
	This contestant's talent score is 2.80
	
	do you want to do this again? n
	Farewell & Fair weather!
	
*/