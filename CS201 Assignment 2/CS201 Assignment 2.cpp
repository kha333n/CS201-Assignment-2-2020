// CS201 Assignment 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//functions declarations
void showElements(int data[][4]);
void PercentageDeath(int data[][4],int choice);
void PercentageRecovered(int data[][4],int choice);

int main()
{

	//storing data in 2D array

	int data[7][4]={
					{0,560433,22115,32634},
					{1,156363,19899,34211},
					{2,84279,10612,0},
					{3,82160,3341,77663},
					{4,71686,4474,43894},
					{5,56956,1198,3446},
					{6,5373,93,1095}
	};
	showElements(data);
	
	//getting input from user

	int selection = -1;  //just to replace garbage value


	do
	{
		cout << "\n Press the country code to calculate percentage of dead and recoverd persons\n ";
		cout << "\n Press 0 for Pakistan ";
		cout << "\n Press 1 for China ";
		cout << "\n Press 2 for Italy ";
		cout << "\n Press 3 for Uk ";
		cout << "\n Press 4 for Iran ";
		cout << "\n Press 5 for France ";
		cout << "\n Press 6 for Turkey ";
		cout << "\n Press 7 for Exit ";
		cout << "\n\n Please Select an Option use number from 0 to 7 : ";
	    input:
		cin >> selection;
		if (selection>=0 && selection<7)
		{
			PercentageDeath(data, selection);
			PercentageRecovered(data, selection);	
		} 
		else
		{
			if (selection == 7)
			{
				return 0;
			}
			cout<<"\n\nChoice should be between 0 to 7";
			cout<<"\ninvalid choice ! please select again : ";
			goto input; 
		}
	}while (selection!=7);
	return 0;
}



//functions definition

void showElements(int data[][4])
{
	cout << "Source Data is Given below : \n\n ";
	cout << " Country\tCases\tDeaths\tRecovered\n ";
	for (int i=0; i<7; i++)
	{
		for (int j=0; j<4; j++ )
		{
			cout << data[i][j]<<"\t";
			
		}
		cout << "\n";	
	}
}

void PercentageDeath(int data[][4], int choice)
{
	float death_rate = (float) 100 * data[choice][2] / data[choice][1];
	cout<< "\nPercentage of death is " <<death_rate <<endl;
}

void PercentageRecovered(int data[][4], int choice)
{
	float recovered_rate = (float) 100 * data[choice][3] / data[choice][1];
	cout << " \n\n Percentage of recovered is:   "<< recovered_rate <<endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


