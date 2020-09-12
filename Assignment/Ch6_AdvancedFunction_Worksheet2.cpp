// This worksheet practices with more advanced function topics and problems, such as reference variables, overloaded
// functions, and stubs and drivers.

#include <iostream>
#include <string>
using namespace std;

//Function Prototypes:
void makeIt5(int&);
int doubleIt(int);
double doubleIt(double);

void circumference(double);

int main()
{
	/*
	--------------------------------------------------------------------------------------------------
	PROBLEM #1

	What is a reference variable? What symbol is used to denote them, and where do you use the symbol?
	A reference variable is an alias for another variable. The symbol used is ampersand(&) and it placed in front of the name
	--------------------------------------------------------------------------------------------------
	*/


	/*
	-------------------------------------------------------------------------------------
	PROBLEM #2

	When using a reference variable, do you pass data by value to the reference variable? 
	Yes When reference variables are used as formal parameters, this is known as Pass By Reference

	Can you pass literals as a actual parameter to a reference variable? 
	No only variables may be passed by reference
	-------------------------------------------------------------------------------------
	*/


	/*
	-------------------------------------------------------------
	PROBLEM #3

	What is wrong with the following statement?

	(The function "makeIt5()" is defined below the main function)
	-------------------------------------------------------------
	*/

	//makeIt5(10);
	//The error occurs because they attempt to pass a nonvariable argument. 10 is  literal 

	/*
	-------------------------------------
	PROBLEM #4

	What will the following code display?
	-------------------------------------
	*/

	int number = 1;

	cout << "The number is: " << number << endl;
	cout << "Calling makeIt5 and passing 'number' to it..." << endl;
	makeIt5(number);

	cout << "The number is now: " << number << endl;
	/* output
		The number is: 1                                                                                                              
		Calling makeIt5 and passing 'number' to it...                                                                                 
		The number is now: 5
	*/

	/*
	--------------------------------------------------
	PROBLEM #5

	What are overloaded functions? Why do we use them?
	overloaded functions are two or more functions may have the same name, as long as their parameter lists are different
	We use them when we need to develop more  than one function with the same name.
	--------------------------------------------------
	*/


	/*
	-------------------------------------------------------------------------------------------------------------
	PROBLEM #6

	1. What is a function signature? Function signature is the name of the function and the data types of the function's parameters in
	the proper order

	2. What must be different in two functions for them to be overloaded, instead of a redefinition of the first?
	The function signature must be different in two functions for them to be overloaded
	-------------------------------------------------------------------------------------------------------------
	*/


	/*
	-------------------------------------------------------------------------------------------------------------------
	PROBLEM #7

	Create an overloaded function "doubleIt()". The function should take a double parameter and should return a double.

	The function should multiply the passed value by 2 (doubles the number) and return the result.

	Create the function below the main function, after the first "doubleIt()" function. Also create the function
	prototype.

	Then, call the "doubleIt()" function with the value of 5 and store the value returned in 'doubled1'.
	Call the function again with the value of 23.7 and store the value returned in 'doubled2'.

	Finally, display 'doubled1' and 'doubled2'
	-------------------------------------------------------------------------------------------------------------------
	*/

	int doubled1=5;
	double doubled2= 23.7;
	doubleIt(doubled1);
	doubleIt(doubled2);
	cout << doubled1 << endl;
	cout << doubled2 << endl;


	/*
	-----------------------------------
	PROBLEM #8

	What does the 'exit()' function do?
	The exit() function causes a program to terminate, regardless of which function or control mechanism is executing
	-----------------------------------
	*/


	/*
	------------------------------------------
	PROBLEM #9

	What are stubs? What are they used for?
	stubs is a dummy function that is called instead of the actual function it represents.
	stubs is used for testing and debugging programs that use functions.

	What are drivers? What are they used for?
	A driver is a program that tests a function by simple calling it.
	driver is used for testing and debugging programs that use functions.
	------------------------------------------
	*/


	/*
	------------------------------------------------------------------------------------------------
	PROBLEM #10

	Create a stub for the function prototype for the function 'circumference'. Remember to create a
	function comment for it.

	The stub should only display the message:

	"The function circumference has been called, and the value of <value> has been passed into it."

	(where <value> is whatever value is passed into the function)

	Finally, call the stub and pass '25.6' into it.
	------------------------------------------------------------------------------------------------
	*/

	return 0;
}

/*
------------------------------------------
Here are the functions for this worksheet:
------------------------------------------
*/


//**************************************************
// The function makeIt5 sets the parameter to 5.   *
// It uses a reference variable to make sure the   *
// parameter keeps the value outside the function. *
//**************************************************

void makeIt5(int& num)
{
	num = 5;
}


//***********************************************************************************
// The overloaded function doubleIt takes an integer and returns double the amount. *
// **********************************************************************************

int doubleIt(int num)
{
	return num * 2;
}


//**********************************************************************************
// The overloaded function doubleIt takes a double and returns double that amount. *
//**********************************************************************************

/*---------------------------------------------------
	WRITE THE OVERLOADED FUNCTION "doubleIt()" HERE
---------------------------------------------------*/
double doubleIt(double num)
{
	return num * 2;
}