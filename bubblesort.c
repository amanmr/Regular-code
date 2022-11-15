#include<stdio.h>
void bubblesort(int arr[], int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int n, arr[100];
    printf("enter no of elements of array");
    scanf("%d", &n);
    printf("Enter the array");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    bubblesort(arr,n);
    printarray(arr,n);
    
    return 0;
}