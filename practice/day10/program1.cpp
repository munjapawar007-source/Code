/*
Q.1 Write a program which accept rows and columns and display below pattern.

Input : 5  5
Output :

*
*  *
*  *  *
*  *  *  *
*  *  *  *  *
*  *  *  *  *  *
*  *  *  *  *
*  *  *  *
*  *  *
*  *
*

Author: munja
*/

#include<iostream>
using namespace std;

void pattern(int num);

int main()
{
    int num;
    cout << "enter the  num: ";
    cin >> num;
    cout << endl;

    pattern(num);

    return 0;
}

void pattern(int num)
{
    for(int i = 1; i <= num; i++)
    {                     
        for(int j = 1; j <= num; j++)
        {
            if(i >= j)
             cout << "* ";
           
        }
        cout << endl;
    }

    for(int i = 2; i <= num; i++)
    {        
        for(int j = 1; j <= num; j++)
        {
            if(i <= j)
            cout << "* ";
           
        }
        cout << endl;
    }
}