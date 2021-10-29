#include<stdio.h>
#include<stdlib.h>
int main()
{
    long  long int n;
    int i = 0,evensum = 0, oddsum = 0;

    scanf("%lld",&n);

    while (n > 0)
    {
        if (i%2==0)
        {
            evensum = evensum + n%10;
            n = n/10;
            i++;
        }
        else
        {
            oddsum = oddsum + n%10;
            n = n/10;
            i++;
        }
    }
    
    printf("%d",abs(oddsum - evensum));
    return 0;
}