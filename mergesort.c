#include<stdio.h>

void merge(int arr[],int i1,int j1,int i2,int j2)
{
int temp[50]; //array used for merging
int i,j,k;
i=i1; //beginning of the first list
j=i2; //beginning of the second list
k=0;
while(i<=j1 && j<=j2) //while elements in both lists
{
if(arr[i]<arr[j])
temp[k++]=arr[i++];
else
temp[k++]=arr[j++];
}
while(i<=j1) //copy remaining elements of the first list
temp[k++]=arr[i++];
while(j<=j2) //copy remaining elements of the second list
temp[k++]=arr[j++];
//Transfer elements from temp[] back to a[]
for(i=i1,j=0;i<=j2;i++,j++)
arr[i]=temp[j];
}

void mergesort(int arr[],int i,int j)
{
    int mid;
    if (i<j)
    {
        mid = (i+j)/2;
        mergesort(arr,i,mid);
        mergesort(arr,mid+1,j);
        merge(arr,i,j,mid+1,j);
    }
}

int main()
{
    int n,arr[30];
    scanf("%d",&n);//number of elements in array 
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    mergesort(arr,0,n-1);

    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}