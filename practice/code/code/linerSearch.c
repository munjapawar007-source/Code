#include<stdio.h>

int main()
{
    int n;
    int arr[100];
    int size = sizeof(arr)/sizeof(arr[0]);
   // printf("Fill value in to the array: ");
    for(int i = 0; i <= size-1; i++)
    {
       arr[i] = i + 1;
    }
    //printf("%d",arr[5]);

    printf("enter number: ");
    scanf("%d",&n);

    for(int i = 0; i <= n-1; i++)
    {
        if(n == arr[i])
        {
            printf("number is matched\n");
        } 
    }
    return 0;
}