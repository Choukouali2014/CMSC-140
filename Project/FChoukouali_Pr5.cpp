/*
 * Class: CMSC140 CRN
 * Instructor:
 * Project 5
 * Computer/Platform/Compiler:Hp/Visual studio
 * Description: (Give a brief description for Project)
 *Write a program that simulates a magic square using 3 one dimensional parallel arrays of integer type. 

The size of the hotel chains in different locations may be different in terms of the number of floors and the type and the number of rooms on each floor.
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Frank Choukouali

*/
#include<iostream>
#include<vector>
using namespace std;

// Global constants 
const int ROWS = 3;  // The number of rows in the array
const int COLS = 3;  // The number of columns in the array
const int MIN = 1;  // The value of the smallest number
const int MAX = 9;  // The value of the largest number
 
// Function prototypes
bool isMagicSquare(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int min, int max);
bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkRowSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
bool checkColSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
bool checkDiagSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
void fillArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
void showArray(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
void displayInfo();

//main function
int main()
{

	/* Define a Lo Shu Magic Square using 3 parallel arrays corresponding         to each row of the grid */
	int magicArrayRow1[COLS], magicArrayRow2[COLS], magicArrayRow3[COLS];
	// Your code goes here
	cout << "************************The Lo Shu Magic Square************************" << endl;
	//Call functions
	fillArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);
	
	cout << "\nThe Lo Shu Magic Square is a grid with 3 rows and 3 columns shown below." << endl;
	showArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);
	bool result = isMagicSquare(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);
	if (result==true)
	{
		cout << "\nThis is a Lo Shu magic square." << endl;
	}
	else
	{
		cout << "\nThis is not a Lo Shu magic square." << endl;
	}
	displayInfo();
	return 0;
}


// Function definitions go here


/*
-Function displayInfo shows information about the programmer and the assignment
*/

void displayInfo()
{
	const int ASSIGNMENT_NUMBER = 5;// holds the assignment number which 3
	const string  PROGRAMMER_NAME = "Frank Choukouali"; // holds the programmer name  which Frank Choukouali
	const string DUE_DATE = "8/16/2020";// holds the due date  which 7/19/2020
	cout << "\nThank you for testing my program!!" << endl;
	cout << "PROGRAMMER: " << PROGRAMMER_NAME << endl;
	cout << "CMSC140 Common Project " << ASSIGNMENT_NUMBER << endl;
	cout << "Due Date: " << DUE_DATE << endl;
}
/*
	Function isMagicSquare takes 3 arrays and a size as argument and 
	return true or false if all the requirements of a magic are met or not.
*/
bool isMagicSquare(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
	return checkRange(arrayRow1, arrayRow2, arrayRow3, size, MIN, MAX)
		&& checkUnique(arrayRow1, arrayRow2, arrayRow3, size)
		&& checkColSum(arrayRow1, arrayRow2, arrayRow3, size)
		&& checkRowSum(arrayRow1, arrayRow2, arrayRow3, size)
		&& checkDiagSum(arrayRow1, arrayRow2, arrayRow3, size);
}
/*
*Function isMagicSquare takes 3 arrays and a size as argument 
*and takes all values enter by a user for each row of the magic square
*/
void fillArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << endl;
		cout << "Please, enter elements for the " << (i + 1) << " row" << endl;
		for (int j = 0; j < size; j++)
		{
			cout << "\tElement [" << j + 1 << "] : ";
			if (i == 2) cin >> arrayRow3[j];
			else if (i == 1) cin >> arrayRow2[j];
			else if (i == 0) cin >> arrayRow1[j];
		}
			
	}
}

/*
* Function showOneArray takes one array and one size as argument and display all elements of one array in on line
*/
void showOneArray(int array[], int size)
{
	cout << "\t";
	for (int i = 0; i < size; i++)
	{
		cout << array[i]<<"  ";
	}
}
/*
* Function showOneArray takes three arrays and one size as argument and display all elements of  arrays row by row
*/
void showArray(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size)
{
	showOneArray(arrayrow1, size);
	cout << endl;
	showOneArray(arrayrow2, size);
	cout << endl;
	showOneArray(arrayrow3, size);
}

/*
* Function checkOneRange takes an array, a size, a min, and a max as argument. 
*It returns true if the values in the array are in the range min and max.Otherwise, it will return false.
*/
bool checkOneRange(int arrayRow[], int size, int min, int max)
{
	for (int i = 0; i < size; i++)
	{
		if(arrayRow[i] > max || arrayRow[i] < min)
		{
			return false;
		}
		

	}
	return true;
}
/*
*Function checkRange takes three arrays, a size, a min, and a max as argument.
*It returns true if the values in the arrays are in the range min and max.Otherwise, it will return false.
*/
bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int min, int max)
{
	bool check_one = checkOneRange(arrayRow1, size, min, max);
	bool check_two = checkOneRange(arrayRow2, size, min, max);
	bool check_three =  checkOneRange(arrayRow3, size, min, max);
	return (check_one && check_two && check_three) ? true : false;
}
/*
*Function checkOneUnique takes a vector and a integer as argument.
*It returns the number of time the valueCheck appears in the vector ArrayValues
*/
int checkOneUnique(vector<int> ArrayValues, int valueCheck)
{
		int occurenceNumber = 0;
		
			for (int j = 0; j < ArrayValues.size(); j++) {
				if (ArrayValues[j] == valueCheck)
				{
					occurenceNumber++;
				}	
			}
		return occurenceNumber;
}

/*
*Function checkUnique takes three arrays, a size, a min, and a max as argument.
* It returns true if the values in the arrays are unique. Otherwise, it will return false.
*/

bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
		vector<int> ArrayValues;
		for (int col = 0; col < size; col++)
		{
			ArrayValues.push_back(arrayRow1[col]);
			ArrayValues.push_back(arrayRow2[col]);
			ArrayValues.push_back(arrayRow3[col]);
		}
		for (int i = 0; i < ArrayValues.size(); i++) {
				if (checkOneUnique(ArrayValues, ArrayValues[i]) > 1)
					return false;
			
		}
		return true;
}


/*
*Function checkColSum takes three int arrays and a size as arguments 
*and returns true if the sum of the values in each of the columns are equal.
*Otherwise, it returns false.
*/


bool checkColSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size)
{
	int col1 = 0; 
	int col2 = 0;
	int col3 = 0;
	col1 = arrayrow1[0] + arrayrow2[0] + arrayrow3[0];
	col2 = arrayrow1[(size/2)] + arrayrow2[(size / 2)] + arrayrow3[(size / 2)];
	col3 = arrayrow1[size - 1] + arrayrow2[size - 1] + arrayrow3[size-1];
	return ((col1 == col2) && (col3 == col1)) ? true : false;

}

/*
*Function checkRowSum takes three int arrays and a size as arguments
*and returns true if the sum of the values in each of the rows are equal.
*Otherwise, it returns false.
*/
bool checkRowSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size)
{
	int row1 = 0; int row2 = 0; int row3 = 0;
	for (int i = 0; i < size; i++)
	{
		row1 += arrayrow1[i];
		row2 += arrayrow2[i];
		row3 += arrayrow3[i];
	}
	
	return ((row1 == row2) && (row1 == row3)) ? true : false;
}

/*
*Function checkDiagSum takes three int arraysand a size as arguments
*and returns true if the sum of the values in each of the array's diagonals are equal.
* Otherwise, it returns false.
*/

bool checkDiagSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size)
{
	int leftDiagSum = 0; 
	int rightDiagSum = 0;
	leftDiagSum = arrayrow1[0] + arrayrow2[(size / 2)] + arrayrow3[size - 1];
	rightDiagSum= arrayrow1[size-1] + arrayrow2[(size / 2)] + arrayrow3[0];
	return leftDiagSum == rightDiagSum ? true : false;
}