/*
Q.2 Write a program to print given pattern.

Input : 5
Output :
A
B C
D E F
G H I J
K L M N O

Author: munja pawar
*/

#include<iostream>
using namespace std;

void pattern(int n);

int main()
{
    int n;
    cout << "Enter Input Num: ";
    cin >> n;

    pattern(n);

    return 0;
}

void pattern(int n)
{
    char c = 'A';

    for(int i = 1; i <=n; i++)
    {
        for(int j = 1; j<=n; j++)
        {
            if(i == n || j == 1 || j <= i)
                cout << c++ << " ";
            else 
                cout << "   ";

                
        }
        cout << endl;
    }
}