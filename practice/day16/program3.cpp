/*
Q.3 Write a program to print given pattern.

Input : row = 7 col = 7
Output :

* * * * * * * 
      *
      *
      *
      *
      *
      *

Author: munja
*/

#include<iostream>
using namespace std;

void pattern(int n);

int main()
{
    int n;
    cout << "enter num: ";
    cin >> n;

    pattern(n);

    return 0;
}

void pattern(int n)
{
    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=n; j++)
        {
            if(i == 1 || j == (n/2) + 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}
