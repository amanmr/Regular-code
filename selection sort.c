#include<stdio.h>
void selectionsort(int arr[], int size)
{
    for(int i=0;i<size-1;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
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
    selectionsort(arr,n);
    printarray(arr,n);
    
    return 0;
}