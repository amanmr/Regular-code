#include<stdio.h>
int queue[10],n=10,front=-1,rear=-1;
void enqueue()
{
    if((rear==n-1 && front==0) || front==rear+1)
    {
        printf("overflow");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        printf("Enter data to insert\n");
        scanf("%d",&queue[rear]);
    }
    else{
        rear=(rear+1)%n;
        printf("Enter data to insert\n");
        scanf("%d",&queue[rear]);
    }
}
void dequeue()
{
    if(front==rear)
    {
        printf("Value deleted is %d",queue[front]);
        front=rear=-1;
    }
    else{
        printf("Value deleted is %d",queue[front]);
    front++;
    }
    
}
void display()
{
    for(int i=front;i!=rear;i=(i+1)%10)
    {
        printf("%d ",queue[i]);
    }
}
int main()
{
    int a,ch;
    do
    {
        printf("Enter choice\n");
        printf("1. Insert\n2. Delete\n3.Display\n");
        scanf("%d",&a);
        switch(a)
        {
            case 1: enqueue();
            break;
            case 2: dequeue();
            break;
            case 3: display();
            break;
        }
        printf("Do you want to continue?\n");
        scanf("%d",&ch);
    } while (ch);
    return 0;
}