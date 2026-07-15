/*
Q.1 Given an array of integers nums and an integer target, return the indices of the two numbers such that they add up to the target.

Input: nums = [2, 7, 11, 15], target = 9
Output: [0, 1]
Explanation: nums[0] + nums[1] equals 9, so the answer is [0, 1].

Input: nums = [3, 2, 4], target = 6
Output: [1, 2]
Explanation: nums[1] + nums[2] equals 6.

Input: nums = [3, 2, 9, 7], target = 4
Output: Not Found

Input: nums = [2,3,3,3,5], target = 6
Output: [1, 2]
Explanation: nums[1] + nums[2] equals 6.

Author: munja
*/

#include <iostream>
#include <vector>
using namespace std;

void sum_of_two_vector_elements(vector<int> arr);

int target;

int main()
{
    int m;
    cout << "enter length of array: ";
    cin >> m;

    vector<int> arr(m);
    cout << "fill element into vector: ";
    for (int n = 0; n < arr.size(); n++)
    {
        cin >> arr[n];
    }

    cout << "Enter addition target: ";
    cin >> target;

    sum_of_two_vector_elements(arr);
}

void sum_of_two_vector_elements(vector<int> arr)
{
    int sum = arr[0];

    cout << "sum of two vector element: ";
    for (int i = 0; i < arr.size(); i++)
    {
        if (sum + arr[i + 1] == target)
        {
            cout << "[" << arr[i] << "," << arr[i + 1] << "]";
            break;
        }
        
            sum = arr[i];
    }
    cout << endl;
}