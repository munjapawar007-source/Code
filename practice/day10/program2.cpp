/*
Q.2 Program to display all prime numbers from 1 to n

Input: n = 11
Output: 2 3 5 7 11

Author: munja
*/

#include <iostream>
using namespace std;

void primeNumber(int n);

int main()
{
    int n;
   
    cout << "Enter Num: ";
    cin >> n;
    cout << endl;

    primeNumber(n);
    
    return 0;
}

void primeNumber(int n)
{
     int i, j;

    for (i = 1; i <= n; i++)
    {
        for (j = 2; j <= i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (i == j)
            cout << j << " ";
    }
}
