/*
Q.1 Write a program which accept string from user and accept one character. Return index of first occurrence of that character.

Input : "Marvellous Multi OS"
Input : M
Output : 0

Input : "Marvellous Multi OS"
Input : W
Output : -1

Input : "Marvellous Multi OS"
Input : e
Output : 4

Author:  MUNJA
*/
#include<iostream>
#include<string>
using namespace std;


int first_idx_occ_finder(string str, char key);

int main()
{
    char key;
    string str;
    int index;

    cout << "enter string: ";
    getline(cin, str);

    cout << "enter key: ";
    cin >> key;

    index = first_idx_occ_finder(str, key);

    cout << "first occurrence is: " << index;

    return 0;
}

int first_idx_occ_finder(string str, char key)
{
    int i = 0;

    if (str.length() == 0)
        return -1;

    while(str[i] != '\0')
    {
        if(str[i] == key)
            return i;
        
        i++;
    }

    return -1;
}