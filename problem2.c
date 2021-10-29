/*MOVE ALL THE ZEROS TO THE END OF AN ARRAY*/
#include<stdio.h>
void move_zero(int arr[], int n)
{
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[k++] = arr[i];
        }
    }

    for (int i = k; i < n; i++)
    {
        arr[i] = 0;
    }
}
int main()
{
    int arr[] = {6,0,8,2,3,0,4,0,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    move_zero(arr,n);

    for (int i = 0; i < n; i++) /* for (int i = n-1; i >= 0; i--)*/
    {
        printf("%d\t",arr[i]);
    }

    return 0;   
}