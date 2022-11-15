#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
} *head=NULL, *end=NULL;
void insert()
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter data to insert - ");
    scanf("%d", &ptr->data);
    ptr->next=NULL;
    ptr->prev=NULL;
    if(head==NULL)
    {
        head=ptr;
       
    }
    else{
        struct node *temp;
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->prev=temp;
    }
     end=ptr;
}
void display()
{
    if(head==NULL)
    {
        printf("Underflow");
    }
    else{
        struct node *temp;
        temp=head;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
        temp=end;
        while(temp!=NULL)
        {
            printf("%d ", temp->data);
            temp=temp->prev;
        }
    }
}
int main()
{
    int ch,a;
    do
    {
        printf("Enter your choice - ");
        printf("1. insert\n2. display");
        scanf("%d",&a);
        switch(a)
        {
            case 1: insert();
            break;
            case 2: display();
            break;
        }
        printf("Do you want to continue ?");
        scanf("%d",&ch);
    } while (ch);
    return 0;
}