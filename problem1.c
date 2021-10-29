/*FIND THE MISSING NUMBER FROM A GIVEN RANGE OF ARRAY*/

#include<stdio.h>
int getmissingnumber(int arr[],int n)
{
    int xor = 0;

    for (int i = 0; i < n; i++)
    {
        xor ^= arr[i];
    }

    for (int i = 1; i <= n-1; i++)
    {
        xor ^=i;
    }
    return xor;
}
int main()
{
    int arr[] = {21,22,23,24,24,25};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("the duplicate number is:%d",getmissingnumber(arr,n));
    return 0;
}
