//This program is used to practice programming with increment/decrement operators and while loops

#include <iostream>
using namespace std;

int main()
{
	/*
	-----------------------------------
	PROBLEM #1

	Write code that does the following:
	1. Increment int1 in postfix
	2. Decrement int2 in prefix
	-----------------------------------
	*/

	int int1 = 9, int2 = 13;
	int1++;
	--int2;


	/*
	---------------------------------------------------------------
	PROBLEM #2

	Whate are the values of a, b, and num after this code executes?
	---------------------------------------------------------------
	*/

	int a = 7, b = 10, num;

	num = (a++ * --b);
	// the values of a = 7, b=9, num = 63


	/*
	----------------------------------------------
	PROBLEM #3

	What will be the output of the following code?
	----------------------------------------------
	*/

	int z = 9;

	if (++z < 10)
	{
		cout << "The weather is wonderful today." << endl;
	}
	else
	{
		cout << "It feels rather hot." << endl;
	}
	// the output is "It feels rather hot."

	/*
	--------------------------------------
	PROBLEM #4

	What is wrong with the following code?
	--------------------------------------
	*/

	int j = 2, k = 23, l;

	l = ++(j + k);
	//The expression must be a modifiable left_value 
	// the parenthesis, if we remove parenthesis in both side the result will be 26
	//if we remove the increment operant, the result will be 25;

	/*
	-----------------------------------------------------------
	PROBLEM #5

	What is the value of firstNum after the loop is terminated?
	-----------------------------------------------------------
	*/

	int counter = 0, firstNum = 5;

	while (counter < 10)
	{
		counter++;
		firstNum++;
	}
	 //the value of firstNum after the loop is terminated is 15;

	/*
	--------------------------------------
	PROBLEM #6

	What is wrong with the following loop?
	--------------------------------------
	*/

	int counter2 = 0;

	while (counter2 < 10)
	{
		cout << "The counter is now: " << counter2 << endl;
	}
	// There is not a break condition so the lop will go on.
	//we have there an infinite loop

	/*
	-----------------------------------------
	PROBLEM #7

	What is the output of the following code?
	-----------------------------------------
	*/

	int counter3 = 25;

	while (counter3 < 20)
	{
		cout << "The counter is now: " << counter3 << endl;
	}

	cout << "Goodbye.";

	//the output of the following code is : Goodbye.
	//the output is Goodbye.


	/*
	-------------------------------------------------------------------------------------------------
	PROBLEM #8

	Write a while loop to display the message "hello world" 7 times.
	-------------------------------------------------------------------------------------------------
	*/

	int firstValue = 0;
	while (firstValue < 7)
	{
		cout << "hello world"<<endl;
		firstValue++;
	}


	/*
	-----------------------------------------------
	PROBLEM #9

	How many times will the following loop execute?
	
	-----------------------------------------------
	*/

	int counter4 = 0, counter5 = 5;

	while (counter5 < 3 || counter4 < 9)
	{
		counter5++;
		counter4++;
	}
	//the loop will execute for 9 times
	//How many times will the following loop execute ? 9 times


	/*
	--------------------------------------------------------------
	PROBLEM #10

	Write a while loop that displays the odd numbers from 0 to 10.
	--------------------------------------------------------------
	*/

	int counter6=0;
	while (counter6 < 10)
	{
		if (counter6 % 2 != 0)
			cout<<counter6<<endl;
		counter6++;
	}
	return 0;
}