/*
 * Class: CMSC140 CRN
 * Instructor:
 * Project 3
 * Computer/Platform/Compiler:Hp/Visual studio
 * Description: (Give a brief description for Project)
 *Complete a program that allows the user to choose addition or subtraction operations on two numbers entered from the keyboard.
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Frank Choukouali

*/

#include<iostream>
using namespace std;

//ProtoTypes
void getNumbers(int& , int& );
int addition(int, int );
int getChoice();
int subtraction(int , int );


int main()
{
	int choice = 0, final_result = 0;
	int firstNumber, secondNumber;
	do {
		choice = getChoice();
		if (choice < 1 || choice > 2)
		{
			cout << "Your choice needs to be 1 or 2, Please try again !!!" << endl;
		}
	}while (choice < 1 || choice > 2);

	getNumbers(firstNumber, secondNumber);
	if (choice == 1)
	{
		final_result = addition(firstNumber, secondNumber);
	}
	else
	{
		final_result = subtraction(firstNumber, secondNumber);
	}
	cout << endl;
	cout << "The result of the operation is : " << final_result;
}
//function get numbers
void getNumbers(int& num1, int& num2)
{
	cout << " Enter first Number : ";
	cin >> num1;
	cout << endl;
	cout << "Enter second Number : ";
	cin >> num2;
}
//function addition
int addition(int num1, int num2) 
{
	int result = num1 + num2;
	return result;
}
//function subtraction
int subtraction(int num1, int num2) 
{
	int result = num1 - num2;
	return result;
}
//function to get choice
int getChoice()
{
	int choice;
	cout << "Enter your choice, 1 for addition, and 2 for subtraction : ";
	cin >> choice;
	cout << endl;
	return choice;
}

