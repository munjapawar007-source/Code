/*
Q.2 Program to replace lower-case characters with upper-case and vice versa.

Input: str1 = "Great Power"
Output: String after case conversion : gREAT pOWER

Author: munja
*/

#include <iostream>
#include <string>
using namespace std;

void case_conversion(string ch);

int main()
{
    string str;
    cout << "Enter String: ";
    getline(cin, str);
    cout << endl;

    case_conversion(str);

    return 0;
}

void case_conversion(string str)
{
     // use only one method at a time bocz string running same function so its affect 


    cout << "***** Method-1 *****" << endl;
    // for (char &ch : str)
    // {
    //     if (ch >= 'a' && ch <= 'z')
    //     {
    //         ch = toupper(ch);
    //         cout << ch;
    //     }
    //     else
    //     {
    //         ch = tolower(ch);
    //         cout << ch;
    //     }
    // }
    // cout << endl;

    cout << "***** Method-2 *****" << endl;
    // // the differance between 'A'(65) and 'a'(97) in ascii is 32
    // for (char &ch : str)
    // {
    //     if (ch >= 'A' && ch <= 'Z')
    //         ch += 32;
    //     else if (ch >= 'a' && ch <= 'z')
    //         ch -= 32;

    //     cout << ch;
    // }
    // cout << endl;

    cout << "***** Method-3 *****" << endl;
    for (char &ch : str)
    {
        if (ch >= 'A' && ch <= 'Z')
            ch |= 32;
        else if (ch >= 'a' && ch <= 'z')
            ch ^= 32; 

        cout << ch;
    }
    cout << endl;
}