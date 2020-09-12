/*
 * Class: CMSC140 CRN
 * Instructor:
 * Discussion Board Homework week 4
 * Computer/Platform/Compiler:Hp/Visual studio
 * Description: (Give a brief description for Project)
 Pick any one topic of the following and Post an initial message:

1. Provide your own short C++ code example that uses math operators of your choice.
	Try to use at least 3 different Math operators (e.g., +, -, *, /, %).
	Be sure to test and explain your code.

2. Provide your own short C++ code example that uses an if-else statement,
	the conditional operator and two relational operators. Be sure to test and explain your code.
 * Due Date:07/03/2020
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Frank Choukouali

*/
#include <iostream>
#include <cstdlib> //for rand and srand
#include <ctime> // For the time function
using namespace std;

int main() 
{
	int numberSelect;
	double number1, number2;
	int getFlip;
	cout << " Let create a simple calculator" << endl;
	cout << " Please, provide the first number of your operation" << endl;
	cin >> number1;// store the user's number one 
	cout << " Please, provide the second number of your operation" << endl;
	cin >> number2;// store the user's number two
	cout << "What kind of operation you want to do : " << endl;
	cout << " 1 : Addition" << endl;
	cout << " 2 : Subtraction" << endl;
	cout << " 3 : Division " << endl;
	cout << " 4 : Multiplication" << endl;
	cout << " 5 : Modulo " << endl;
	cout << "Select a number from 1 through 5" << endl;
	cin >> numberSelect;// store the user's number for the operation
	if (numberSelect >= 1 && numberSelect <= 5)
	{
		if (numberSelect == 1) {
			cout << "Addition of " << number1 << " + " << number2 << " = " << number1 + number2 << endl;
		}
		else if(numberSelect == 2)
		{
			cout << "Subtraction of " << number1 << " - " << number2 << " = " << number1 - number2 << endl;
		}
		else if (numberSelect == 3)
		{
			if (number2 != 0) {
				cout << "Division of " << number1 << " / " << number2 << " = " << number1 / number2 << endl;
			}
			else {
				cout << "This calculator cannot support division by 0";
			}
		}
		else if (numberSelect == 4)
		{
			cout << "Multiplication of " << number1 << " * " << number2 << " = " << number1 * number2 << endl;
		}else {
			int number1C = static_cast<int>(number1);
			int number2C = static_cast<int>(number2);
			cout << "Modulo of " << number1C << " % " << number2C << " = " << number1C % number2C << endl;
		}
	}
	else {
		cout << "The number you selected is not include on the list of operation" << endl;
	}
// Flip the coin 
	cout << "let flip the coin" << endl;
	cout << "Enter 0 or 1" << endl;
	cin >> getFlip; // Store the user's value of flipping
	if (getFlip >= 0 && getFlip <= 1) {
		srand(time(NULL));// generator of random number 
		//rand select one random number each time we call the function
		cout <<(rand() % 2 == getFlip && rand() % 2 == 1 ? "HEADS" : "TAILS");
	}
	else {
		cout << "We cannot flip the coin today !!!" << endl;
	}
	return 0;
}