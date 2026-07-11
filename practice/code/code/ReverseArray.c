#include<stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int reverseArray[sizeof(arr)/sizeof(arr[0])] = {0};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("array size: %d\n", n);

    printf("reverseArray:");
    for(int i = 1; i <= n; i++)
    {
       
       reverseArray[i] = arr[n - i];   // reverse array logic
       printf("%d", reverseArray[i]);
        
    }

    return 0;
}



