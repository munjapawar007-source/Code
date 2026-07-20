/*
Q.1 Write a program to print below pattern.

Input : row = 7 col = 7
Output :

*
* *
*   *
*     *
*       *
*         *
* * * * * * *

Author: munja
*/

#include<iostream>
using namespace std;

void pattern(int num);

int main()
{
    int num;
    cout << "Enter value num: ";
    cin >> num;

    pattern(num);

    return 0;
}

void pattern(int num)
{
    for(int i = 1; i<=num; i++)
    {
        for(int j = 1; j<=num; j++)
        {
            if(i == num || j == 1 || j == i)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}
