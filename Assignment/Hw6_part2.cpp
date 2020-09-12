/*
 * Class: CMSC140 CRN
 * Instructor:
 * Project 3
 * Computer/Platform/Compiler:Hp/Visual studio
 * Description: (Give a brief description for Project)
 *Develop a program working as a soda vending machine. 
 *The program should show the product menu with price and take user input for product number, quantity and pay amount. 
 *The output should show the total sale price including tax and the change
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Frank Choukouali

*/

#include<iostream>
#include<string>
using namespace std;

//Global variables
string choiceName = "";//holds the name of the product for example Coke

//Prototypes
void displayInfo(double, double);
double takePurchase(double);
double showMenu();
double takePayment();

int main()
{
	double price, purchase, payment;

	cout << "============= Vending Machine=============" << endl;
	price = showMenu();
	purchase = takePurchase(price);

	do {
		payment = takePayment();
		if (payment <= purchase)
			cout << "The total purchase exceed the amount of payment please enter again!!!!" << endl;
	} while (payment <= purchase);
	cout << endl;
	displayInfo(purchase, payment);

}
/*
	function takePurchase take price as parametre and return (item*quantity)
*/
double takePurchase(double price)
{
	int quantity;
	cout << "How many " << choiceName << " do you want ? ";
	cin >> quantity;
	return price * quantity;
}
/*
	Function that show all the menu and return a price
*/
double showMenu()
{
	int choice;
	double price;
	cout << "\t 1. Coke $1.25" << endl;
	cout << "\t 2. Pepsi $1.00" << endl;
	cout << "\t 3. Water $2.00" << endl;
	cout << "\t 4. Coffee $1.50 " << endl;
	cout << "\t 5. Exit Menu " << endl;
	cout << endl;
	cout << " Enter your choice : ";

	cin >> choice;
	if (choice == 1)
	{
		choiceName = "Coke";
		return price = 1.25;
	}
	else if (choice == 2)
	{
		choiceName = "Pepsi";
		return price = 1.00;
	}
	else if (choice == 3)
	{
		choiceName = "Water";
		return price = 2.00;
	}
	else if (choice == 4)
	{
		choiceName = "Coffee";
		return price = 1.50;
	}
	else
		exit(0);
}

/*
	displayInfo take two parameters purchase and payment display all the information to the user
*/
void displayInfo(double purchase, double payment)
{
	double tax = (purchase * 6) / 100;
	double total_purchase = purchase + tax;
	double change = payment - total_purchase;

	cout << "Tax Amount : $" << tax << endl;
	cout << "Total Purchase : $" << total_purchase << endl;
	cout << "change : $" << change << endl;
}
/*
	function takePayment takes the amount provide by the user and return it
*/
double takePayment()
{
	double amount;
	cout << "How much is your payment ? ";
	cin >> amount;
	return amount;

}