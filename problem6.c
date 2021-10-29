//ROTATING AN ARRAY BY 'K' TIMES RIGHT ROTATE
#include<stdio.h>
void rightrotatebyone(int arr[],int n)
{
    int last = arr[n-1];
    for (int i = n - 2; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = last; 
}
void rightrotate(int arr[],int n, int k)
{
    if (k < 0 || k >= n)
        return;
    for (int i = 0; i < k; i++)
    {
        rightrotatebyone(arr,n);
    }
    
}
int main()
{
    int n,arr[20];
    int k;
    scanf("%d",&n); // entering how many elements

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]); //entering elements in the array
    }
    scanf("%d",&k); //enter how many times u want to rotate
    rightrotate(arr,n,k); 

    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }  
    return 0;
    
}