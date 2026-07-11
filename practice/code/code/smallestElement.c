#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int arr[] = {6, 8, 2, 4,1};
    int n;
    int smallestNum = arr[0];

    n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 1; i <= n-1; i++)
    {
        if(arr[i] <= smallestNum)    // logic for smallest number
        {
            smallestNum = arr[i];
            printf("current smallest no:%d \n",smallestNum);
        }
    }

    puts("----------------------------------");
    printf("smallest number:%d \n", smallestNum);

    return 0;
}
