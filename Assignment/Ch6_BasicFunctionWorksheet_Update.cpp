//This worksheet is used to practice using basic function concepts and coding, such as passing by value and returning.

#include <iostream>
#include <string>
using namespace std;

void changeToFive(int);
int returnSix();
int triple(int);
void justTest(int , bool);
double timesPi(double );
int addOneReturnSquare(int);
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
	----------------------------------------------------------------------------------------------
	PROBLEM #2

	If a function changes the value of its parameter, and you passed a variable into the function,
	will the function change the data in the variable?
	----------------------------------------------------------------------------------------------
	*/


	/*
	-----------------------------------------------------------------------------
	PROBLEM #3

	What will will the variable num be after the execution of these statements?
	-----------------------------------------------------------------------------
	*/

	int num = 1;

	cout << "In the main function, the number is: " << num;
	changeToFive(num);
	//the variable num will be 1 after the execution

	/*
	---------------------------------------------------------------------------------
	PROBLEM #4

	Can a void function have a return statement? If so, what does it do? If not, why?
	---------------------------------------------------------------------------------
	*/
	//A void function cannot return any values. But we can use the return statement. 
	//It indicates that the function is terminated.
	//From a void function, we cannot return any values, but we can return something other than values

	/*
	------------------------------------------------------------------
	PROBLEM #5

	In a function that is not void, what does the return statement do?
	------------------------------------------------------------------
	*/
		//A return statement ends the processing of the current function and returns control to the caller of the function

	/*
	-------------------------------------------
	PROBLEM #6

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
	PROBLEM #7

	Complete the function named "returnSix()". The function should return the number 6.

	Then, call the function and display what it returns.
	-----------------------------------------------------------------------------------
	*/
	cout << returnSix();

	/*
	----------------------------------------------------------------------------------
	PROBLEM #8

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
	PROBLEM #9

	Create a function named "timesPi()". The function should take an argument of type double and
	have return a value of type double.

	The function should then return the passed value times the number pi, where pi is 3.1415.

	Remember to write a function comment for "timesPi()".

	Then, call the function, pass the number 2.0 into it, and display the result.
	--------------------------------------------------------------------------------------------
	*/
	cout << timesPi(2.0) << endl;

	/*
	------------------------------------------------------------------------------------------------------------------
	PROBLEM #10

	Write a function called "justTest()". The function should have two parameters: an integer named "num"
	and a boolean named "flag". The function should square the number and store the square in "num" and set "flag"
	to the opposite of its current value. Then display a message "In the function justTest:" and then display
	the values of "num" and "flag".
	See the function comment in the lines below the main function for more detail.

	Then, call the function "justTest()" and passed the variables "num" and "flag" (defined below) into it.

	Finally, display the message "Back in the main function:" and the values of "num" and "flag" in the main function.
	------------------------------------------------------------------------------------------------------------------
	*/
		justTest(num, false);
	/*
	--------------------------------------------------------------------------------------------------------------
	PROBLEM #11

	Write a function called "addOneReturnSquare()". The function should take one parameter, "num".
	The function should add one to the number, and then it should return the square of the number -- which should
	be now the original value plus 1.

	Then, in the lines below, call the function and pass num1 as the parameter. Save the data that is returned
	from the function in the variable square, and finally display square.
	--------------------------------------------------------------------------------------------------------------
	*/
		int square = addOneReturnSquare(num);
		cout << square << endl;

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

/*
	------------------------------------------------------------------------------------------------------------------
	Write a function called "justTest()". The function should have two parameters: an integer named "num"
	and a boolean named "flag". The function should square the number and store the square in "num" and set "flag"
	to the opposite of its current value. Then display a message "In the function justTest:" and then display
	the values of "num" and "flag".

	------------------------------------------------------------------------------------------------------------------
	*/
void justTest(int num, bool flag)
{
	num = num *num;
	flag = !flag;
	cout << "Back in the main function: and the values of " << num << " and " << flag << " in the main function." << endl;
}
/*
	--------------------------------------------------------------------------------------------------------------
	Write a function called "addOneReturnSquare()". The function should take one parameter, "num".
	The function should add one to the number, and then it should return the square of the number -- which should
	be now the original value plus 1.
	--------------------------------------------------------------------------------------------------------------
	*/
int addOneReturnSquare(int num)
{
	num++;
	return num * num;
}