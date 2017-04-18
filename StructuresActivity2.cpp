/*********************************
 Ch 7 Structures Activity 2 : More on Structures - Starting File
 Program Name:  StructuresActivity2.cpp  
 Author: Kevin George
 Class:  CSC100
 Brief Description:   Intro to using Structures.  PetInfo Example.

 *********************************/

#include <iostream>
#include <string>

using namespace std;

//structure declarations
struct PetInfo
{
	string name;
	string type;
	int age;

	//constructor
	PetInfo( )
	{  name = "unknown";
	   type = "unknown";
	   age = 0;
	}

	//1.  Write another constructor for PetInfo that 
	//    accepts 3 arguments for the name, type, and age
	PetInfo(string n, string t, int a)
	{
		name = n;
		type = t;
		age = a;
	}

	 
}; //struct PetInfo

//function prototypes
void displayPetInfoData(PetInfo somePet);
PetInfo getPetInfoData(PetInfo askPet);



int main()
{
	
	//2.  Create a PetInfo variable called myPet that initializes
	//    name to "Fred", type to "frog", and age to 4.
	PetInfo myPet("Fred","frog", 4);
	//4.  Write a statement that invokes the displayPetInfoData
	//    function and passes it myPet
	displayPetInfoData(myPet);
	
	PetInfo myKitteh;
	//6.  Write a statement that invokes getPetInfoData and 
	//    assigns the structure data to myDog

	getPetInfoData(myKitteh);

	//7.  Write a statement that invokes the displayPetInfoData
	//    function and passes it myDog

	cout << "\nGoodbye\n";

	return 0;
}
//function implementation here. You will need to complete.

//3.  Complete the implementation of function displayPetInfo
void displayPetInfoData(PetInfo somePet)
{
    cout << "Pet Info" << endl;
	cout << "\t name: \t" << somePet.name << endl;
	cout << "\t type: \t" << somePet.type << endl;
	cout << "\t age: \t" << somePet.age << endl;
}

// 5.Complete the implementation of function getPetInfoData
PetInfo getPetInfoData(PetInfo askPet)
{  
   PetInfo somePet;

   //ask the user for the pet name, type and age
	cout << "What is your pet's name? ";
	cin >> somePet.name;
	cout << "What is your pet's type? ";
	cin >> somePet.type;
	cout << "What is your pet's age? ";
	cin >> somePet.age;
	displayPetInfoData(somePet);


   return somePet;
}



