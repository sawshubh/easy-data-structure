#include <stdio.h>
void bubblesort(int n)
{
    int arr[20], temp,flag;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            } 
            if (!flag)
                break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}
int main()
{
    int n;

    scanf("%d", &n);

    bubblesort(n);

    return 0;
}