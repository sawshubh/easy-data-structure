#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* link;
};
struct node* root = NULL;
int len;

void append(void);
void addatbegin(void);
void addafter(void);
int length(void);
void display(void);
void delete(void);
void exit();
int main()
{
    int ch;
    while (1)
    {
        printf("1.APPEND\n2.ADD AT BEGIN\n3.ADD AFTER\n4.LENGTH\n5.DISPLAY\n6.DELETE\n7.EXIT\n");

        printf("Enter the choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: append();
                    break;
            case 2: addatbegin();
                    break;
            case 3: addafter();
                    break;
            case 4: len = length();
                    printf("Length:%d\n",len);
                    break;
            case 5: display();
                    break;
            case 6: delete();
                    break;
            case 7: exit(0);
                    break; 
            default: printf("INVALID INPUT\n\n");                                                       
        }
    }
    return 0;
}

void append()
{
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    
    printf("Enter node data:");
    scanf("%d", &temp->data);
    temp->link = NULL;

    if(root == NULL)
    {
        root = temp;
    }
    else
    {
        struct node *p;
        p = root;

        while (p->link != NULL)
        {
            p = p->link;
        }
        p-> link = temp;
    }
}

int length()
{
    int count = 0;
    struct node *temp;
    temp = root;

    while (temp != NULL)
    {
        count++;
        temp = temp->link;
    }
    return count;   
}

void display()
{
    struct node *temp;
    temp = root;

    if(temp == NULL)
    {
        printf("LIST IS EMPTY\n");
    }
    else
    {
        while (temp != NULL)                //temp != NULL
        {
            printf("%d-->",temp->data);
            temp = temp->link;
        }
        printf("\n\n");
    }   
}

void addatbegin()
{
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter head node:");
    scanf("%d",&temp->data);
    temp->link = NULL;

    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        temp->link = root;
        root = temp;
    }    
}

void addafter()
{
    struct node *temp,*p;
    int loc,i;

    printf("Enter location:");
    scanf("%d",&loc);

    if (loc > length())
    {
        printf("INVALID LOCATION\n");
        printf("Current List have %d node\n",length());
    }
    else
    {
        p = root;
        while (i < loc)
        {
            p = p -> link;
            i++;
        }
        temp = (struct node*)malloc(sizeof(struct node));
        printf("Enter node:");
        scanf("%d",&temp->data);
        temp->link = p->link;
        p->link = temp;
    }      
}

void delete()
{
    struct node *temp;
    int loc;

    printf("Enter the location to delete the node:");
    scanf("%d",&loc);

    if (loc > length())
    {
        printf("INVALID LOCATION\n");
    }
    else if(loc == 1)
    {
        temp = root;
        root = temp -> link;
        temp ->link = NULL;
        free(temp);
    }
    else
    {
        struct node *p = root, *q;
        int i = 1;
        while(i < loc - 1)
        {
            p = p ->link;
            i++;
        }
        q = p ->link;
        p->link = q -> link;
        q->link = NULL;
        free(q);
    }   
}
