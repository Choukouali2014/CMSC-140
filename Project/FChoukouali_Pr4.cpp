/*
 * Class: CMSC140 CRN
 * Instructor:
 * Project 4
 * Computer/Platform/Compiler:Hp/Visual studio
 * Description: (Give a brief description for Project)
 *Write a program that calculates the average number of days a company's employees are absent during the year and outputs a report on a file named "employeeAbsences.txt".  

The size of the hotel chains in different locations may be different in terms of the number of floors and the type and the number of rooms on each floor.
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Frank Choukouali

*/

#include <iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;

//Create a global variable of type ofstream for the output file
ofstream outputFile;

//ProtoTypes
int TotalDayAbsent(int);
int NumOfEmployees();
double AverageAbsent(int, double);

// The main function
int main()
{
	const string PROGRAMMER = "Frank Choukouali";

	int numberEmployee = NumOfEmployees();
	cout << endl;
	int absents = TotalDayAbsent(numberEmployee);
	AverageAbsent(numberEmployee, absents);

	outputFile << "\nProgrammer : "<< PROGRAMMER << endl;
	outputFile.close();
	return 0;
}

/*
	Functions
*/

/*
*A function called NumOfEmployees. This function asks the user for the number of employees in the company. 
*This value should be returned as an int. The function accepts no arguments 
*/
int NumOfEmployees()
{
	int numberOfEmployees;
	do{
		cout << "Please enter the number of employees in the company : ";
		cin >> numberOfEmployees;
	} while(numberOfEmployees<1);
	
	return numberOfEmployees;
}

/*
*function called TotDaysAbsent that accepts an arguments of type int 
*for the number of employees in the company and returns the total of missed days as an int. 
	
*/
int TotalDayAbsent(int numberEmployees)
{
	int employeeID;
	int daysMissed;
	int totalMissed=0;
	outputFile.open("employeeAbsences.txt");
	outputFile << "\tEMPLOYEE ABSENCE REPORT" << endl;
	outputFile << "\temployee id \t days absent" << endl;
	if (numberEmployees >= 1) {
		for(int i=0; i<numberEmployees;i++)
		{
			cout << "Please enter an employee ID : ";
			cin >> employeeID;
			cout << endl;
			do {
				cout << "Please enter the number of days this employee was absent : ";
				cin >> daysMissed;
			} while (daysMissed < 1);
			outputFile << "\t "<<setw(7)<<right<< employeeID<< "\t " <<right<< setw(4) << daysMissed << endl;
			cout << endl;
			totalMissed += daysMissed;
		}
	}
	outputFile << "\nThe "<< numberEmployees <<" employees were absent a total of "<< totalMissed<<" days." << endl;
	return totalMissed;
}

/*
*function called AverageAbsent that calculates the average number of days absent
*The function takes two arguments: the number of employees in the company The total number of days absent for all employees during the year.  
*This function should return, as a double, the average number of days absent
*/
double AverageAbsent(int numberEmployees, double TotalDayAbsent)
{
	outputFile << "The average number of days absent is " <<setprecision(1)<<showpoint<< fixed << (TotalDayAbsent / numberEmployees)<<" days."<<endl;
	return TotalDayAbsent / numberEmployees;
}