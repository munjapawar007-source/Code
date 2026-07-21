/*
Q.2 Write a program to print given pattern.

Input : 5
Output :
A
B B
C C C
D D D D 
E E E E E

Author: munja
*/

#include<iostream>
using namespace std;

void pattern(int n);

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;

    pattern(n);

    return 0;
}

void pattern(int n)
{
    char c = 'A';

    for(int i = 1; i<= n; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            if(i >= j)
             cout << c << " ";
        }
        c++;
        cout << endl;
    }
}