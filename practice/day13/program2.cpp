/*
    exception handling: 
    An exception is a runtime error or unexpected condition that interrupts
    the normal flow of a program. Exception handling allows you to detect these errors 
    and handle them gracefully instead of crashing the program.

    throw: Raising the red flag when an error occurs.
    try:   A block of code where you anticipate something might go wrong.
    catch: The safety net that catches the thrown error and decides how to recover.
*/

#include<iostream>
using namespace std;

int main ()
{
    int a = 10;
    int b = 0;

    // cout << "division of a/b: " << a / b;  // Runtime error

    try
    {
        if(b == 0)
          throw "Division By zero is not allowed.";

          cout << "division of a/b: " << a / b;
        
    }
    catch(const char* msg)
    {
        cout << msg << '\n';
    }
    cout << endl;

    cout << "addition of a+b: " << a+b << endl;
    
    cout << "program End";


    return 0;
}