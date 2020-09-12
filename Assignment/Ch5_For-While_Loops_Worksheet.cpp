//This worksheet is used to practice programming and tracing loops, specifically for loops.

#include <iostream>
using namespace std;

int main()
{
	/*
	---------------------------------------------------------------------------------------------------------
	PROBLEM #1

	Write a while loop that asks the user to enter in an integer and adds that integer into the variable sum.
	The loop should continue as long as sum is less than 100.
	---------------------------------------------------------------------------------------------------------
	*/

	int integer, sum = 0;
	while (sum < 100)
	{
		cout << "Please, enter in an integer : ";
		cin >> integer;
		sum += integer;
	}

	/*
	------------------------------------------------------------------------------------------
	PROBLEM #2

	Write a loop that asks the user to enter a positive number and adds that number into sum2.
	If the user enters a negative number, break from the loop and show sum2.
	------------------------------------------------------------------------------------------
	*/

	int integer2 = 0, sum2 = 0;
	do 
	{
		cout << "Enter a positive number " << endl;
		cin>>integer2;
		if (integer2 < 0) break;
	} while (integer >= 0);

	/*
	------------------------------------------------------------------------------------------
	PROBLEM #3

	Write a loop that asks the user to enter a positive number and adds that number into sum2.
	If the user enteres a negative number, break from the loop and show sum2.
	------------------------------------------------------------------------------------------
	*/

	int integer2 , sum2;
	do
	{
		cout << "Enter a positive number " << endl;
		cin >> integer2;
		if (integer2 < 0) break;
	} while (integer >= 0);

	/*
	-----------------------------------------
	PROBLEM #4

	What is the output of the following code?
	-----------------------------------------
	*/

	for (int i = 10; i > 5; i--)
	{
		cout << i << endl;
	}
	// the output of the following code is 
	/* Answer: 
		10
		9
		8
		7
		6
	*/

	/*
	------------------------------------------------------------------------------------------------
	PROBLEM #5

	Complete the following for loop. The for loop should display the even numbers between 10 and 20.
	------------------------------------------------------------------------------------------------
	*/

	for (int i = 10; i < 20;i++)
	{
		if((i % 2) == 0) 
		{
			cout << i << endl;
		}
	}

	/*
	--------------------------------------------------------------------------
	PROBLEM #6

	Write a for loop and a while loop that adds the numbers between 10 and 15.
	Which one would you prefer to use?
	--------------------------------------------------------------------------
	*/

	int sum3 = 0, sum4=0;
	for (int i = 10; i < 15; i++)
	{
		sum3 += i;
	}
	int j=10;
	while (( j<15))
	{
		sum4 += j;
		j++;
	}

	cout << sum3<<endl;//60
	cout << sum4<<endl;//60

	// I would prefer the for loop

	/*
	------------------------------------------------------------------------
	PROBLEM #7
	Can you write a for loop to do the following?
	Ask the user to enter a positive number and adds the numbers every time.
	------------------------------------------------------------------------
	*/
	//No I cannot use the for loop to do it
	//It really depends because if we know how many time we need to add the positive number we can use the for loop
	return 0;
}