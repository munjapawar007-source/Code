/*
Q.3 Write a program which accept one number and display factors of that number.

Input : 15
Output : 1 3 5 15

Input : 10
Output : 1 2 5 10

Author: munja
*/

#include<iostream>
using namespace std;

void factor_of(int n);

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    cout << endl;

    factor_of(n);
    return 0;
}

void factor_of(int n)
{
    cout << "factors of " << n << " is : "; 
    for(int fact = 1; fact <= n; fact++)
    {
        if(n % fact == 0)
            cout << fact << " ";
    }

}