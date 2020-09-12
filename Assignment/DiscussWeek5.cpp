
/*
 * Class: CMSC140 CRN
 * Instructor:
 * Discussion Week5 
 * Computer/Platform/Compiler:Hp/Visual studio
 * Description: (Give a brief description for Project)
 *Provide your own short C++ code example that uses a while loop. Be sure to test and explain your code.
 *Provide your own short C++ code example that uses a do-while loop. Be sure to test and explain your code.
 *Provide your own short C++ code example that uses a for loop. Be sure to test and explain your code.
 *Provide your own short  C++ code example that uses the concepts of files of your choice.
Be sure to test and explain your code.
 * Due Date:07/10/2020
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Frank Choukouali

*/
#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Please,enter number of rows: ";
    cin >> rows;
    while (rows <= 0) {
        cout << "Please,enter number a positif rows: " ;
        cin >> rows;
    }
    cout << " We can start our program !!!" << endl;
    for (int line = 1; line <= rows; line++)
    {
        int  j= 1; // used to represent j(line, i) 
        for (int i = 1; i <= line; i++)
        {
            // The first value in a line is always 1 
            cout << j << " ";
            j = j * (line - i) / i;
        }
        cout << "\n";
    }
    return 0;
}