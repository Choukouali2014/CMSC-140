/*
 * Class: CMSC140 CRN
 * Instructor:
 * Project1
 * Computer/Platform/Compiler:Hp/Visual studio 
 * Description: (Give a brief description for Project)
 *The Department plans to purchase a humanoid robot. 
 *The Chairman would like you to write a program to show a greeting script the robot can use later.
 * Due Date:06/21/2020
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Frank Choukouali

*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;



int main()
{

	// define const variables and initial 
	const int ONE_DOG_YEAR = 7; // holds the one year dog  equivalent to  human one year
 	const int ONE_GOLD_FISH_YEAR = 5;// holds the one year gold fish equivalent to human one year
	const int DAYS_PER_MONTH = 30;// holds the number of days per month which is 30 days
	const int MONTH_PER_YEAR = 12;// holds the number of month per year which 12 months
	const int HOURS_PER_DAY = 24;// holds the number of hours per day which 24 hours
	const int MINUTES_PER_HOURS = 60;// holds the number of minutes per hours which is 60minutes
	const int SECONDES_PER_MINUTE = 60;// holds the number of secondes per minute which is 60 secondes
	const int ASSIGNMENT_NUMBER = 1;// holds the assignment number which 1
	const string  PROGRAMMER_NAME = "Frank Choukouali";// holds the programmer name  which Frank Choukouali
	const string DUE_DATE = "06/21/2020";// holds the due date  which 6/21/2020
	const string ROBOT_NAME = "Conficker";//holds the robot name which is Conficker

	//variable to hold two numbers and an age
	int number1, number2, age;
	//variable to hold the visitor Name 
	string visitorName;

	cout << "**************** Robot Prototype Scripting ********************" << endl << endl;
	cout << "Hello, welcome to Montgomery College! My name is " << ROBOT_NAME << ". May I have your name?"<< endl;
	getline(cin, visitorName);
	cout << "Nice to have you with us today, " << visitorName << "!" << endl;
	cout << "Let me impress you with a small game." << endl;
	cout << "Give me the age of an important person or a pet to you." << endl;
	cout << "Please give me only a number:" << endl;
	cin >> age; 
	cout << endl;
	cout << "You have entered " << age << "." << endl;
	cout << setw(54) << "If this is for a person, the age can be expressed as:" << endl;
	cout << setw(2) << age << " years " << endl;
	cout << setw(4) << "or " << age * MONTH_PER_YEAR << " months " << endl;
	cout << setw(10) << "or about " << age * MONTH_PER_YEAR * DAYS_PER_MONTH << " days " << endl;
	cout << setw(10) << "or about " << age * MONTH_PER_YEAR * DAYS_PER_MONTH * HOURS_PER_DAY << " hours " << endl;
	cout << setw(10) << "or about " << age * MONTH_PER_YEAR * DAYS_PER_MONTH * HOURS_PER_DAY * MINUTES_PER_HOURS << " minutes " << endl;
	cout << setw(10) << "or about " << age * MONTH_PER_YEAR * DAYS_PER_MONTH * HOURS_PER_DAY * MINUTES_PER_HOURS * SECONDES_PER_MINUTE << " seconds." << endl;
	cout << setw(29) << "If this is for a dog, it is " << age * ONE_DOG_YEAR << " years old in human age." << endl;
	cout << setw(35) << "If this is for a gold fish, it is " << age * ONE_GOLD_FISH_YEAR << " years old in human age." << endl <<endl;
	cout << "Let's play another game, " << visitorName << ". Give me a whole number." << endl;
	cin >> number1;
	cout << "Very well. Give me another whole number." << endl;
	cin >> number2;
	cout << "Using the operator '+' in C++, the result of " << number1 << " + " << number2 << " is "  << number1 + number2 << "." << endl;
	cout << "Using the operator '/', the result of " << number1 << " / " << number2 << " is " << number1 / number2 << endl;
	cout << setprecision(1) << fixed << endl;
	cout << "however, the result of "<< static_cast<double>(number1) << " / " << static_cast<double>(number2) << " is about "  << static_cast<double>(number1) / static_cast<double>(number2) << "." << endl << endl;
	cout << "Thank you for testing my program!!" << endl;
	cout << "PROGRAMMER: " << PROGRAMMER_NAME << endl;
	cout << "CMSC140 Common Project " << ASSIGNMENT_NUMBER << endl;
	cout<<"Due Date: " << DUE_DATE << endl; 

	return 0;
}