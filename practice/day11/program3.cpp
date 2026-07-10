/*
Q.3 Write a program which accept decimal number and covert it into binary.

Input :n = 24
Output : 11000

Input :n = 11
Output : 1011

Author: munja
*/

#include<iostream>
using namespace std;

void decimal_to_binary(int num);

int main()
{
    int num;
    cout << "enter number: ";
    cin >> num;
    cout << endl;

    cout << "decimal: " << num << endl;
    decimal_to_binary(num);

    return 0;
}

void decimal_to_binary(int num)
{
    int bit;
    cout << "binary: ";
    for(int i = 7; i>=0;i--)
    {
        bit = (num >> i) & 1;
          cout << bit;
    }
    cout << endl;
}
