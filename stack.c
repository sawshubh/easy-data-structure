#include<stdio.h>
#define CAPACITY 5 // preprocessor macro
int stack[CAPACITY], top = -1;
int isFull(void);
int isEmpty(void);
void push(int);
int pop(void);
void peek(void);
void display(void);
void exit(int);

int main()
{
    int choice,ele;
    while(1)
    {
    printf("1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n5.QUIT\n");
    printf("Enter your choice:");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: printf("enter element to push:");
                scanf("%d",&ele);
                push(ele);
                break;
        case 2: ele = pop();
                if (ele == 0)
                {
                    printf("underflow\n");
                }
                else
                {
                    printf("%d is popped\n",ele);
                }
                break;
        case 3: peek();
                break;

        case 4: display();
                break;
        case 5: exit(0);
                break;
        default : printf("***invalid input***\n");
    }
    }
    return 0;
}

int isFull()
{
    if(top == CAPACITY - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }  
}

void push(int ele)
{
  if (isFull())
  {
      printf("stackoverflow\n");
  }
  else
  {
      top++;
      stack[top] = ele;
      printf("%d element pushed\n",ele);
  }
}

int pop()
{
    if(isEmpty())
    {
        return 0;
    }
    else
    {
        return stack[top--];
    }
    
}

void peek()
{
    if (isEmpty())
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("peek element : %d\n",stack[top]);
    }
}
void display()
{
    if (isEmpty())
    {
        printf("No element to display\n");
    }
    else
    {
        for (int i = 0; i <= top; i++)
        {
            printf("%d\n",stack[i]);
        }
        
    }
}

    