/*
Q.2 Program to perform user defined operation such as Addition, Subtraction, Multiplication, Division, using Switch case.

Option 1 - Addtion 
Option 2 - Subtraction
Option 3 - Multiplication
Option 4 - Division

Take user defined input and Option and perform operation.

Author: munja
*/

#include<iostream>
using namespace std;

int addition(int n1, int n2);
int subtraction(int n1, int n2);
int multiplication(int n1, int n2);
int division(int n1, int n2);

int main()
{
    int n1,n2, choice;

    while(1)
    {
        cout << "choose from the below options:\n";
        cout << "1. Addition\n2. subtraction\n3. multiplication\n4. subtraction\n5. Exit\n>";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter num1: ";
                cin >> n1;
                cout << "Enter num2: ";
                cin >> n2;

                cout << n1 << "+" << n2 << " = " << addition(n1,n2) <<endl;
                break;

            case 2:
                cout << "Enter num1: ";
                cin >> n1;
                cout << "Enter num2: ";
                cin >> n2;

                cout << n1 << "-" << n2 << " = " << subtraction(n1, n2);
                break;
            
            case 3:
                cout << "Enter num1: ";
                cin >> n1;
                cout << "Enter num2: ";
                cin >> n2;

                cout << n1 << "*" << n2 << " = " << multiplication(n1, n2);
                break;

            case 4:
                cout << "Enter num2: ";
                cin >> n1;
                cout << "Enter num2: ";
                cin >> n2;

                cout << n1 << "/" << n2 << " = " << division(n1, n2);
                break;

            case 5:
                cout << "\nthank you for using application!!!";
                return 0;
                break;
            default:
            cout << "please choose valid choice!\n";
        }
    }

    return 0;
}

int addition(int n1, int n2)
{
    return n1+n2;
}

int subtraction(int n1, int n2)
{
    return n1-n2;
}

int multiplication(int n1, int n2)
{
    if(n1==n2==0)
    return -1;

    return n1*n2;
}

int division(int n1, int n2)
{
    if(n1==n2==0)
    return -1;

    return n1/n2;
}

