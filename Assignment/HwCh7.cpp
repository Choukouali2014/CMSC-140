/*
 * Class: CMSC140 CRN
 * Instructor:
 * Project2
 * Computer/Platform/Compiler:Hp/Visual studio
 * Description: (Give a brief description for Project)
 *
 * Due Date:8/9/2020
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Frank Choukouali

*/

/*
Implement a function named largerThanN  that accepts three arguments: an array of type int,  the size of the array of type int and an int number n.

The function should display all of the numbers in the array that are greater than the number n.

in the main() function create an array named numbers containing 10 integers :  30,20,50,2,-1,44,3,12,90,32

Ask the user to enter a number.

Call the the function  largerThanN  and pass the array , the size and the number that user entered.
*/
#include <iostream>

using namespace std;

void largerThanN(int tab[], int size, int n);

int main()
{
	int number; 
	int const size = 10;
	int tab[size] = { 30,20,50,2,-1,44,3,12,90,32 };
	
	cout << "Please, enter a number : " ;
	cin >> number;
	cout << "\n The numbers that are larger than " << number << " are : ";  
	largerThanN(tab, size, number);
	cout << endl;

	return 0;
}

/*
*The function should display all of the numbers in the array that are greater than the number n.
*/
void largerThanN(int tab[],int size,int n)
{
	
	for (int i = 0; i < size; i++)
	{
		/* condition to determine if  a number in array  is greath than the number n */
		if (tab[i] > n)
		{
			cout<< tab[i]<<" ";
		}
	}

}