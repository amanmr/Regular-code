#include<stdio.h>
int queue[5];
int front=-1,rear=-1;
void insert(void)
{
    int a;
    printf("Enter the data - ");
    scanf("%d", &a);
    if(rear==4)
    {
    printf("Overflow");
    return 0;
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
    }
    else{
        rear++;
    }
    queue[rear]=a;
}
void delete(void)
{
    if(front==-1)
    {
        printf("Underflow");
        return;

    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        rear--;
    }
}
int main()
{
     int choice;   
    while(choice != 4)   
    {     
        printf("\n*************************Main Menu*****************************\n");  
        printf("\n=================================================================\n");  
        printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");  
        printf("\nEnter your choice ?");  
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            insert();  
            break;  
            case 2:  
            delete();  
            break;  
            case 3:  
            display();  
            break;  
            case 4:   
            break;  
            default:   
            printf("\nEnter valid choice??\n");  
        }  
    }
}