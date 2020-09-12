// This worksheet is used for practice working with functions. Specifically, it practices using basic terminology,
// the parts of a function, calling a function and working with function prototypes.

#include <iostream>
#include <string>
using namespace std;

void sayHello();
void displayString(string);
void multiplier(int, int);
void sayGoodbye3();
void divideAdd5(int, int);
//******************************************
// Write a function in the lines above the main function.
//Name the function 'helloWorld()'.
//The function should display the message "Hello World!" 
//and it should not return anything.*	  *
//******************************************
void helloWorld()
{
	cout << "Hello World!" << endl;
}

//******************************************
// The displayName function should display *
// the name of the programmer.			   *
//******************************************

void displayName()
{
	cout << "Frank Choukouali" << endl;
}

int main()
{
	/*
	------------------------------------------------
	PROBLEM #1

	What is modular programming? What is a function?
	------------------------------------------------
	*/
	//modular programming is 

	/*
	----------------------------------------
	PROBLEM #2

	For the following function, what is the:
	1. return type : void.
	2. name : sayHello
	3. parameter list: no parameter
	4. body: cout<<"Hello!"<<endl;
	5. function header: void sayHello()

	void sayHello()
	{
		cout << "Hello!" << endl;
	}

	----------------------------------------
	*/


	/*
	--------------------------------------------------------------------------
	PROBLEM #3

	Write a statment that calls the function named 'sayHello()'. What happens?

	--------------------------------------------------------------------------
	*/
	sayHello();
	//the function will display Hello!;
	/*

	-------------------------------------------------------------------------------
	PROBLEM #4

	When creating a function, can you call it before you define it? Why or why not?
	-------------------------------------------------------------------------------
	*/
	//we have to create a function before you can execute it. 
	//In other words, the function definition has to be executed before the first time it is called
	/*
	--------------------------------------------------------------------
	PROBLEM #5

	Complete the function named 'displayName()' above the main function.
	The function should display your name.
	Then, call the function in the lines below this problem.
	---------------------------------------------------------------------
	*/
	displayName();

	/*
	-----------------------------------------------------------------------------------------
	PROBLEM #6

	Write a function in the lines above the main function. Name the function 'helloWorld()'.
	The function should display the message "Hello World!" and it should not return anything.

	Also, write a function comment for 'helloWorld()' to describe what the function does.

	Then, call the function in the lines below this problem.
	-----------------------------------------------------------------------------------------
	*/
	helloWorld();

	/*
	----------------------------------------------------------------------------
	PROBLEM #7

	What is a function prototype? Why is it used? Where should the prototype go?
	----------------------------------------------------------------------------
	*/
	//A function prototype eliminates the need to place a function definition before all calls to the function
	//Function prototypes are usually placed near the top of a program so the compiler will encounter them before any functions calls.

	/*
	------------------------------------------------------------------------------------
	PROBLEM #8

	Write a statement that calls the function 'sayGoodbye3()'.

	What is the problem? How can we fix the problem?

	Now, fix the problem and then call the function.
	-----------------------------------------------------------------------------------
	*/
		
		//the problem is the compiler does not recognize the function
		// to fix it I need to create a prototype of sayGoodbye3();
	sayGoodbye3();

	/*
	--------------------------------------------------------------------
	PROBLEM #9

	What are values called that are passed into a function? Values sent into a function are called arguments
	What are variables called that hold the passed values in a function? Parameters

	--------------------------------------------------------------------
	*/
	//Values sent into a function are called arguments
	//What are variables called that hold the passed values in a function? Parameters
	/*
	--------------------------------------------------------------------------------------------
	PROBLEM #10

	Write a statement that calls the function 'displayString()'.
	Pass the string "Hello from the function displayString()" into the function when calling it.

	--------------------------------------------------------------------------------------------
	*/
	displayString("Hello from the function displayString()");

	/*
	--------------------------------------------
	PROBLEM #11

	What is wrong with the following statements?
	--------------------------------------------
	*/

	/*
	displayString();

	displayString(57);
	*/
		//The first call of displayString does not have a parameter
		// displayString(57) 57 is not a string so the function will not executed.
	/*
	--------------------------------------------
	PROBLEM #12

	Can a function have more than one parameter?
	--------------------------------------------
	*/
	//Yes a function can have more than one parameter

	/*
	----------------------------------------------------------------------------------------
	PROBLEM #13

	Complete the function named 'multiplier()'.
	The function should display the multiplication of the two ints passed as values into it.

	Then, call the function in the lines below and pass the values 5 and 7 into it.
	----------------------------------------------------------------------------------------
	*/

		multiplier(5, 7);
	/*
	--------------------------------------------------------------------------------------------------------
	PROBLEM #14

	Write a function named 'divideAdd5()'. The function should have two int parameters and should not return
	anything. The function should divide the two passed integers and add 5 to the result. Then the function
	should display the result to the user.
	Make sure to create the function comment as well to detail what the function does.

	Then, create a function prototype for the function.

	Finally, call the function in the lines below this problem. Pass the values 10 and 5 into it.

	--------------------------------------------------------------------------------------------------------
	*/
		divideAdd5(10, 5);

	return 0;
}



/*
-------------------------------------------------
The functions already defined for this worksheet:
-------------------------------------------------
*/

//*********************************************
// The sayHello function displays the message *
// Hello! on the screen.                      *
//*********************************************

void sayHello()
{
	cout << "Hello!" << endl;
}


//-------------------------------------------------------------------------------------//
//-------------------------------------------------------------------------------------//

//************************************************
// The sayGoodbye3 function displays the message *
// Goodbye! on the screen three times.           *
//************************************************

void sayGoodbye3()
{
	cout << "Goodbye!" << endl;
	cout << "Goodbye!" << endl;
	cout << "Goodbye!" << endl;
}

//*************************************************
// The displayString function displays the passed *
// string str on the screen.					  *
//*************************************************

void displayString(string str)
{
	cout << str << endl;
}

//********************************************
//The multiplier function should display the *
//result of num1 times num2					 *
//********************************************

void multiplier(int num1, int num2)
{
	cout<< num1 * num2<<endl;
}

/*
	--------------------------------------------------------------------------------------------------------
	PROBLEM #14

	Write a function named 'divideAdd5()'. The function should have two int parameters and should not return
	anything. The function should divide the two passed integers and add 5 to the result. Then the function
	should display the result to the user.
	--------------------------------------------------------------------------------------------------------
	*/

void divideAdd5(int param1, int param2)
{
	int result = param1/param2;
	result += 5;
	cout << result << endl;
}