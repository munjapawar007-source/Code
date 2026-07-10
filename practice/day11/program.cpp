/*
Q.1 Write a program which accepts one string from user and checks the string is palindrome or not.

Input: "level"
Output: True

Input: "A man, a plan, a canal, Panama!"
Output: True

Author: munja
*/

#include<iostream>
#include<string>
using namespace std;

bool palindrome(string palindrome);

int main()
{
    string palindrom;
    cout << "enter string: ";
    cin >> palindrom;
    cout << endl;

    if(palindrome(palindrom))
        cout << "\nstring is palindrome!";
    else
        cout << "\nstring is not palindrome!";
    
        cout << endl;

    return 0;

}

bool palindrome(string palindrome)
{
    int n = palindrome.length();


    for(int i = 0; i <= n; i++)
    {
        if(palindrome[i] != palindrome[n-1- i])
            return false;       
    }
    return true;
}