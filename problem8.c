#include<stdio.h>

int maxstock(int arr[], int n, int mid)
{
    int lowest=0, highest = 0,profit,location = 0;
    for (int i = 1; i < mid; i++)
    {
        if (arr[i]<arr[location])
        {
            location = arr[i];
        }
    }

    for (int j = mid + 1; j < n; j++)
    {
        if (arr[j] > j)
        {
            highest = arr[j];
        }
    }

    profit = highest - location;
    
    return profit;
}
int main()
{
    int arr[20];
    int n,mid;

    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    mid = (sizeof(arr) / sizeof(arr[0])) / 2;
    maxstock(arr,n,mid);
    printf("%d ",maxstock(arr,n,mid));
    return 0;
    
}