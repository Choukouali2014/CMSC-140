/*
 * Class: CMSC140 CRN
 * Instructor:
 * Homework Chapter 5 problem 1
 * Computer/Platform/Compiler:Hp/Visual studio
 * Description: (Give a brief description for Project)
 * (Star patterns) : write a program using loops to display the following patterns
 * Due Date:7/12/2020
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Frank Choukouali

*/
#include <iostream>
using namespace std;

int main()
{
	int i = 1, j = 1, line1 = 10, line2 = 20, rows1 = 10, rows2 = 20, rows3 = 10, rows4 = 20;
	cout << "Star patterns :" << endl << endl;
	cout << "(i)" << endl;
	// align 10 stars on a single line 
	do {
		cout << "*";
		i++;
	} while (i <= line1);
	cout << endl << endl;

	cout << "(ii)" << endl;
	// align 20 stars on a single line 
	do {
		cout << "*";
		j++;
	} while (j <= line2);

	cout << endl << endl;
	cout << "(iii)" << endl;
	// align  stars on ten rows and each line will increase by one star starting with first row and first line equal to one star 
	for (int k = 1; k <= rows1; k++)
	{
		for (int l = 1; l <= k; l++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	cout << endl;
	cout << "(iv)" << endl;
	// align  stars on twenty rows and each line will increase by one star starting with first row and  first line equal to one star
	for (int k = 1; k <= rows2; k++)
	{
		for (int l = 1; l <= k; l++)
		{
			cout << "*";
		}
		cout << "\n";
	}


	cout << endl;
	cout << "(v)" << endl;
	// align  stars on ten rows and each line will decrease by one star starting with first row and first line equal to ten stars
	for (int k = rows3; k >= 1; k--)
	{
		for (int l = 1; l <= k; l++)
		{
			cout << "*";
		}
		cout << "\n";
	}


	cout << endl;
	cout << "(vi)" << endl;
	// align  stars on twenty rows and each line will decrease by one star starting with first row and first line equal to twenty stars
	for (int k = rows4; k >= 1; k--)
	{
		for (int l = 1; l <= k; l++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}