/*
Q.3 Write a program to print given pattern.

Input: 7  7
Output:
j = 0   1   2   3   4   5   6
i=0   *   *   *   *   *   *   *     <- Top Border
i=1   *   *               *   *     <- Outer Diagonals
i=2   *       *       *       *     <- Inner Diagonals
i=3   *           *           *     <- Center Intersection
i=4   *       *       *       *     <- Inner Diagonals
i=5   *   *               *   *     <- Outer Diagonals
i=6   *   *   *   *   *   *   *     <- Bottom Border
Author: munja
*/

#include<iostream>
using namespace std;

void pattern(int num);

int main()
{
    int num;
    cout << "enter number: ";
    cin >> num;

    pattern(num);

    return 0;
}

void pattern(int num)
{
    int i,j,k;
    
     for (i = 1; i <= num; i++)
    {
        for (j = 1, k = num; j <= num || k >= 1; j++, k--)
        {
            if (i == 1|| i == num || k == 1 || k == num || i == k || i == j)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}