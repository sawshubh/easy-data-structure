#include<stdio.h>
void sort(int arr[], int n)
{
    int swap,flag;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j]<arr[j+1])
            {
                swap = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = swap;
                flag = 1;
            }
            if (!flag)
            break;       
        }   
    }

    for (int i = 0; i < 2; i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int n;
    int arr[30];

    scanf("%d",&n); //how many elements in an array

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]); //entering array elements
    }
    
    sort(arr,n);

    return 0;
}