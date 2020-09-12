// This worksheet practices creating, initializing, and indexing arrays.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	/*
	-----------------------------------------------------------------------------------------------------------
	PROBLEM #1

	What is an array? What is a subscript?
	An array allow people to store and work with multiple values of the same data type
	A subscript is used as an index to pinpoint a specific element within an array
	What number does the subscript start at? That is, what is the index of the very first element in any array?
	the subscript start at 0
	the index of the very first element in any array is 0
	-----------------------------------------------------------------------------------------------------------
	*/


	/*
	----------------------------------------
	PROBLEM #2

	What is the size of the following array?
	The size of the following array is 5 
	----------------------------------------
	*/

	int array1[5];


	/*
	-----------------------------------------------------------
	PROBLEM #3

	Create an array named 'array2' of type int that has size 3.
	-----------------------------------------------------------
	*/
	int array2[3];

	/*
	----------------------------------------------------------------------
	PROBLEM #4

	Create an array of type boolean named 'array3' that has the size of 10
	----------------------------------------------------------------------
	*/

	bool array3[10];
	/*
	--------------------------------------------------------------------------------
	PROBLEM #5

	Create an array of type string named 'stringArray' that can hold 1,500 elements.
	--------------------------------------------------------------------------------
	*/
	string stringArray[1500];

	/*
	----------------------------------------------------------------
	PROBLEM #6

	Define an char array named 'varArray' that has the size of SIZE.
	----------------------------------------------------------------
	*/

	const int SIZE = 10;
	char varArray[SIZE];

	/*
	--------------------------------------
	PROBLEM #7

	For the following array 'testArray':

	1. Set the first element to 50.1
	2. Set the element at index 3 to 1.24
	3. Set the third element to 13.9
	4. Set the eigth element to 1002.34
	5. Set the last element to 1.0
	--------------------------------------
	*/

	double testArray[10];
	testArray[0] = 50.1;
	testArray[2] = 1.24;
	testArray[3] = 13.9;
	testArray[8] = 1002.34;
	testArray[9] = 1.0;


	/*
	----------------------------------------------------------
	PROBLEM #8

	Can you set values to array indexes that are out of range? 
	No we cannot
	----------------------------------------------------------
	*/


	/*
	--------------------------------------
	PROBLEM #9

	What is wrong with the following code?
	Nothing is wrong with the code. 
	--------------------------------------
	*/

	/*
	int badArray[10];

	badArray[10] = 2;

	*/
	int badArray[10];

	badArray[10] = 2;

	/*
	---------------------------------------------------------------------------------
	PROBLEM #10

	Create an array named 'fibonacci.' that holds integers and has the size of 7.
	Initialize the array to hold the values 1, 1, 2, 3, 5, 8, and 13, in that order.
	---------------------------------------------------------------------------------
	*/
	int fibonacci[7] = { 1, 1, 2, 3, 5, 8, 13 };

	return 0;
}