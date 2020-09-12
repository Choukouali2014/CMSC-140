/*
 * Class: CMSC140 CRN
 * Instructor:
 * Discussion HomeWork
 * Computer/Platform/Compiler:Hp/Visual studio
 * Description: (Give a brief description for Project)
 *Provide your own short C++ code example that uses functions. Be sure to test and explain your code.
 *You can use examples from the Internet, but provide with references and explanation
The size of the hotel chains in different locations may be different in terms of the number of floors and the type and the number of rooms on each floor.
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Frank Choukouali

*/

#include <iostream>

using namespace std;

//ProtoTypes
void draw(int);
int menu();

int main()
{
    int choice;
    // call of the functions
    choice = menu();
    draw(choice);
    
    return 0;
}
//function that will draw a triangle 

int menu()
{
    int choice;
    cout << " Let's Draw : " << endl;
    cout << "1. Triangle" << endl;
    cout << "2. Pyramid" << endl;
    do {
        cout << "Please, select a number 1 or 2 : ";
        cin >> choice;
    } while (choice<1 || choice>2);
    return choice;
   
}

/*
* The draw take choice as a parametre and based on the argument passed through the function whether 1 or 2, 
 * The function will draw a triangle for 1 or Pyramid for 2
*/
void draw(int choice)
{
    int rows;

    cout << "Please Enter the number of rows : ";
    cin >> rows;
    cout << endl;
    if(choice == 1)
        for (int i = 1; i <= rows; i++)
        {
            for (int j = 1; j <= i; ++j)
            {
                cout << "* ";
            }
            cout << "\n";
        }
    else
        for (int i = 1, j = 0; i <= rows; ++i, j = 0)
        {
            for (int space = 1; space <= rows - i; ++space)
            {
                cout << "  ";
            }

            while (j != 2 * i - 1)
            {
                cout << "* ";
                ++j;
            }
            cout << endl;
        }

}