// This worksheet practices using more advanced topics and concepts with arrays, such as range-based for loops,
// function arguments, and multi-dimensional arrays.

#include <iostream>
#include <string>
using namespace std;

//Function Prototypes

void turnAllTo5(int[], int);
void countUp(int[], int);

int main()
{
	/*
	--------------------------------------------------------------------------------------------------------------------
	PROBLEM #1

	What is a range-based for loop? What data type or structure (integers, characters, arrays, etc.) can you use it for?
	The range-based for loop is a loop that iterates once for each element in an array.
	The data type must be the same as the data type of an array elements
	--------------------------------------------------------------------------------------------------------------------
	*/


	/*
	---------------------------------------------------------------------------------
	PROBLEM #2

	Given the defined array, what does the range-based for loop do in the code below?
	The range-based for loop will iterate five times and display each time the number correspondent in nums array
	the display will be :
	23
	45
	67
	89
	10
	---------------------------------------------------------------------------------
	*/

	const int NUM_SIZE = 5;
	int nums[NUM_SIZE] = { 23, 45, 67, 89, 10 };

	for (int value : nums)
	{
		cout << value << endl;
	}


	/*
	--------------------------------------
	PROBLEM #3

	What is wrong with the following code?
	--------------------------------------
	We cannot assign one array to another without using a loop the send the data.
	Error for array assignment
	*/

	/*
	int index = 4;
	const int SIZE = 5;
	string names[SIZE] = { "John", "Samantha", "Julia", "David", "Jane" };
	string copyNames[SIZE];

	copyNames = names;
	*/


	/*
	---------------------------------------
	PROBLEM #4

	What is wrong with the following code?
	---------------------------------------
	There is nothing wrong with the code. 
	the display will be : The arrays are different but it's mistake to use a operator == to compare two arrays. 
	*/

		int array1[] = { 5, 10, 15, 20, 25 };
		int array2[] = { 5, 10, 15, 20, 25 };

		if (array1 == array2)
		{
			cout << "The two arrays are the exact same." << endl;
		}
		else
		{
			cout << "The arrays are different." << endl;
		}


	/*
	------------------------------------------------------------------------------
	PROBLEM #5

	What are parallel arrays? Give an example of how a parallel array can be used.
	parallel arrays are arrays that someone can build relationships between data stored in two or more arrays.
	------------------------------------------------------------------------------
	*/


	/*
	----------------------------------------------------------------------------------------------
	PROBLEM #6

	Can you pass an array to a function? 
	yes can pass an arrray to a function 

	If an array can be passed to a function, is it passed by value? If not, then how is it passed?
	it is passed by the name of the array
	----------------------------------------------------------------------------------------------
	*/


	/*
	--------------------------------------------------------------------------------------------------------------
	PROBLEM #7

	What will be displayed to the user after the following code is executed? What will the values in 'numbers' be?
	the numbers at each iteration will be 5; 
	the display will be : 
	5
	5
	5
	--------------------------------------------------------------------------------------------------------------
	*/

	const int SIZE2 = 3;
	int numbers[SIZE2] = { 1, 2, 3 };

	turnAllTo5(numbers, SIZE2);

	for (int i = 0; i < SIZE2; i++)
	{
		cout << numbers[i] << endl;
	}


	/*
	---------------------------------------------------------------------------------------------------------------------
	PROBLEM #8

	Complete the function 'countUp'. The function should change the values in the passed array parameter 'numArray'
	to the index value. That is, the data at index 0 should be 0, the data at index 1 should be 1, and so forth.

	Then, call the method using the defined values below. Display the contents of the array after you call the function.
	---------------------------------------------------------------------------------------------------------------------
	*/

	const int SIZE3 = 10;
	int numbers2[SIZE3] = { 6, 9, 4, 1, 10, 97, 34, 62, 88, 57 };


	/*
	----------------------------------------------------------------
	PROBLEM #9

	Can you have an array that contains arrays? What is this called?
	Yes it is called the multidimensional arrays
	----------------------------------------------------------------
	*/


	/*
	--------------------------------------------------------------------------------------------------
	PROBLEM #10

	1. How many indexes do you need to get at an individual piece of data in a two-dimensional array?
	2. What must be included in the parameter list when passing a two-dimensional array to a function?
		size declarator for the number of columns
	3. Can an array have more dimensions than two? yes
	--------------------------------------------------------------------------------------------------
	*/


	return 0;
}


/*-------------------------------------------------
Here are the functions created for this worksheet
-------------------------------------------------*/


void turnAllTo5(int numArray[], int size)
{
	for (int i = 0; i < size; i++)
	{
		numArray[i] = 5;
	}
}


//******************************************************************************
// The function 'countUp' changes the values of the passed array, 'numArray'   *
// The function stores the index values - that is, the number used as an index *
// to get at the value in the array - in that location in the array.		   *
// Thusly, at index 0, the value 0 will be stored; at index 1, the value 1     *
// will be stored, etc.														   *
//******************************************************************************
void countUp(int numArray[], int size)
{

}