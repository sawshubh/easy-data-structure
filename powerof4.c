#include<stdio.h>
int main()
{
    int n,power,r=0,count,s=0,temp;
 
    scanf("%d",&n);
    temp = n;
    power = n * n * n * n;
    count = 0;
    while(n>0)
    {
        r = r + n % 10;
        n = n/10;
        count += 1;
    }
    
    while(count > 0)
    {
        s = s + power % 10;
        power = power / 10;
        count--;
    }
    n = temp;
    printf("%d\n",n);
    printf("%d",s);
    if (s == temp)
    {
        printf("\nTRUE");
    }
    else
    {
        printf("\nFALSE");
    }
    return 0;
}