/*
 * Class: CMSC140 CRN
 * Instructor:
 * Project2
 * Computer/Platform/Compiler:Hp/Visual studio
 * Description: (Give a brief description for Project)
 *There are two main systems for measuring distance, weight and temperature, 
 *the Imperial System of Measurement and the Metric System of Measurement.
* Most countries use the Metric System, which uses the measuring units such as meters 
*and grams and adds prefixes like kilo, milli and centi to count orders of magnitude. 
*In the United States, we use the older Imperial system, where things are measured in feet, inches and pounds.
 * Due Date:7/5/2020
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

	const int ASSIGNMENT_NUMBER = 2;// holds the assignment number which 1
	const string  PROGRAMMER_NAME = "Frank Choukouali";// holds the programmer name  which Frank Choukouali
	const string DUE_DATE = "7/5/2020";// holds the due date  which 6/21/2020
	int choiceNumber; //  holds the user choice for the menu
	double temperature, distance,weight;
	string  countryName;//  holds the user country name
	cout << "**************** Project 2 ********************" << endl;
	cout << "enter a country name : " ;
	getline(cin,countryName);
	cout << endl;
	cout << "Converter Toolkit" << endl;
	cout << "-----------------" << endl;
	cout <<setw(27) <<"1. Temperature Converter" << endl;
	cout <<setw(24) <<"2. Distance Converter" << endl;
	cout <<setw(22) <<"3. Weight Converter" << endl;
	cout <<setw(10) <<"4. Quit" << endl << endl;;
	cout << "Enter your choice (1-4) : ";
	
	cin >> choiceNumber;
	cin.ignore();
	if (choiceNumber >= 1 && choiceNumber <= 4) 
	{
		if (choiceNumber == 1) {
			cout << "Please enter temperature in Celsuis (such as 24): "; cin >> temperature;
			cin.ignore();
			cout << endl;
			temperature =  (temperature *9/5) + 32; // formula it's F = (9/5)*C + 32
			cout << "It is " << setprecision(0) << fixed << temperature << " in Fahrenheit"<<endl;
		}
		else if (choiceNumber == 2) {
			cout << "Please enter distance in Kilometer (such as 18.25): "; 
			cin >> distance;
			cin.ignore();
			cout << endl;
			if (distance >= 0) {
				distance = distance * 0.6; // •	1 kilometer = 0.6 mile,
				cout << "It is " << fixed << showpoint << setprecision(2) << distance << " in Miles";
			}
			else {
				cout << "!!! Program  does not convert negative distance !!!" << endl;
			}
			
		}
		else if (choiceNumber == 3) {
			cout << "Please enter weight in Kilogram (such as 40): "; 
			cin >> weight;
			cin.ignore();
			cout << endl;
			if (weight >= 0) {
				weight = weight * 2.2;//•	1 kilogram = 2.2 pounds, 
				cout << "It is "  << fixed << showpoint << setprecision(1) << weight << " in Pounds";
			}
			else {
				cout << "!!! Program  does not convert negative weight !!!" << endl;
			}
		}
		else if(choiceNumber == 4) {
			
		}
	}
	else 
	{
		cout << "Our menu does not have your choice" << endl ;
	}
	cout << endl;
	cout<< countryName << " sounds fun !" << endl << endl;
	cout << "Thank you for testing my program!!" << endl;
	cout << "PROGRAMMER: " << PROGRAMMER_NAME << endl;
	cout << "CMSC140 Common Project " << ASSIGNMENT_NUMBER << endl;
	cout << "Due Date: " << DUE_DATE << endl;
	return 0;
}