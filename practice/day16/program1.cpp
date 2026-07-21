/*
Q.1 Write a program to print below pattern.

Input : row = 7 col = 7
Output :

* * * * * * *
          *
        *
      *
    *
  *
* * * * * * *

Author: munja pawar
*/

#include<iostream>
using namespace std;

void pattern(int num);

int main(void)
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    pattern(n);


    return 0;
}

void pattern(int num)
{
    for(int i = 1; i <= num; i++)
    {
        for(int j = num; j >= 1; j--)
        {
            if(i == 1 || i == num || i == j)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}