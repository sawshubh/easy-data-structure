/*REVERSE EVRY WORD IN  THE SENTENCE*/

#include<stdio.h>
void rev_sent();
int main()
{
rev_sent();
return 0;
}

void rev_sent()
{
char c;
scanf("%c", &c);

// call rev_sent() when the character is not null
if( c != "\n")  
{
rev_sent();
printf("%c",c);  // Print the character inside
}
}