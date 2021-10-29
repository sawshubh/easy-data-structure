#include<stdio.h>

void maxi(int arr[], int n)
{
    int max = 0;
    for (int i = 0; i <= n; i++)
    {
        if(arr[i] < arr[i+1])
        {
            max = arr[i+1];
        }
        else if (arr[i] > arr[i+1])
        {
            max = arr[i];
        }
        else
        {
            max = arr[i];
        }
        
    }
    printf("\n%d",max);
}

int main()
{
    int arr[10], n;

    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    maxi(arr,n);
    
    return 0;
}

