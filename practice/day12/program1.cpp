/*
Q.3 Write a program which accept input in binary format and convert it into decimal number.

Input :n = 11000
Output : 24

Input :n = 1011
Output : 11

Author: munja
*/
#include<iostream>
using namespace std;

int binary_to_decimal(int num);

int main()
{
    int n;
    cout << "enter binary num: ";
    cin >> n;
    cout << endl;

    cout << "decimal: " << binary_to_decimal(n) << endl;

    return 0;
}

int binary_to_decimal(int num)
{
    int last_digit = 0;
    int dec = 0;
    int base = 1;

    while(num != 0)
    {
        last_digit = num%10;
        num /= 10;

        dec += last_digit  * base;
        
        base *= 2;
    }
  
    return dec;
}


