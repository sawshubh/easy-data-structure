#include<stdio.h>
void countingsort(int arr[], int n, int max)
{
    int count[10] = {0};

    for (int i = 0; i < n; i++)
    {
        count[arr[i]] = count[arr[i]] + 1;
    }

    for (int i = 0; i <= max; i++)
    {
        for (int j = 0; j < count[i]; j++)
        {
            printf("%d ",i);
        }   
    }
}
int main()
{
    int arr[20];
    int n,max=0;

    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);

        if (arr[i]>max)
        {
            max = arr[i];
        }
    }
    countingsort(arr,n,max);
    return 0;
}