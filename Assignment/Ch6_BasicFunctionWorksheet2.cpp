//This worksheet is used to practice using basic function concepts and coding, such as passing by value and returning.

#include <iostream>
#include <string>
using namespace std;

void changeToFive(int);
int returnSix();

int triple(int);

int main()
{

	/*
	--------------------------------------------------------
	PROBLEM #1

	What does it mean to pass data by value into a function?
	--------------------------------------------------------
	*/
	//Pass data by value into a function is called arguments

	/*
	-----------------------------------------------------------------------------
	PROBLEM #2

	What will will the variable num be after the execution of these statements?
	-----------------------------------------------------------------------------
	*/

	int num = 1;

	cout << "In the main function, the number is: " << num;
	changeToFive(num);
	//the variable num will be 1 after the execution

	/*
	---------------------------------------------------------------------------------
	PROBLEM #3

	Can a void function have a return statement? If so, what does it do? If not, why?
	---------------------------------------------------------------------------------
	*/
	//A void function cannot return any values. But we can use the return statement. 
	//It indicates that the function is terminated.
	//From a void function, we cannot return any values, but we can return something other than values

	/*
	------------------------------------------------------------------
	PROBLEM #4

	In a function that is not void, what does the return statement do?
	------------------------------------------------------------------
	*/
	//A return statement ends the processing of the current function and returns control to the caller of the function
	/*
	-------------------------------------------
	PROBLEM #5

	What is wrong with the following function?:


	int returnHello()
	{
		return "Hello";
	}
	-------------------------------------------
	*/
	//The return type is integer and the function returns a string. The return type must match with the return inside the function

	/*
	-----------------------------------------------------------------------------------
	PROBLEM #6

	Complete the function named "returnSix()". The function should return the number 6.

	Then, call the function and display what it returns.
	-----------------------------------------------------------------------------------
	*/
	cout << returnSix();

	/*
	----------------------------------------------------------------------------------
	PROBLEM #7

	Write a function for the function prototype "triple()". The function should return
	the cube of the parameter.

	Remember to write a function comment for "triple()".

	Then, call the function and pass the number 3 into it. Store the result in the
	variable "cube" and display "cube".
	----------------------------------------------------------------------------------
	*/

	int cube;
	cube = triple(3);
	cout << cube << endl;

	/*
	--------------------------------------------------------------------------------------------
	PROBLEM #8

	Create a function named "timesPi()". The function should take an argument of type double and
	have return a value of type double.

	The function should then return the passed value times the number pi, where pi is 3.1415.

	Remember to write a function comment for "timesPi()".

	Then, call the function, pass the number 2.0 into it, and display the result.
	--------------------------------------------------------------------------------------------
	*/
	cout << timesPi(2.0) << endl;


	return 0;
}

/*
------------------------------------------------
Here are the functions defined for this program:
------------------------------------------------
*/

//****************************************************
// The changeToFive function changes the data within *
// the passed formal parameter to five.              *
//****************************************************

void changeToFive(int num)
{
	num = 5;
	cout << "The number is now: " << num << endl;
}

//*******************************************
// The returnSix function should return the * 
// number 6 from the function.				*
//*******************************************

int returnSix()
{
	return 6;
}
//*******************************************
// The triple function should return the * 
// cube of the parameter..				*
//*******************************************

int triple(int num)
{
	return num * num * num;
}

/*
	--------------------------------------------------------------------------------------------
	Create a function named "timesPi()". The function should take an argument of type double and
	have return a value of type double.
	--------------------------------------------------------------------------------------------
	*/
double timesPi(double value)
{
	double pi = 3.1415;
	return value * pi;
}