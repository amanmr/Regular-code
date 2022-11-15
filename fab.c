#include<stdio.h>
int fab(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else{
        return fab(n-1) + fab(n-2);
    }
}
int main()
{
    int a;
    printf("Enter the number of terms - ");
    scanf("%d", &a);
    for(int i=0;i<a;i++)
    printf("%d ", fab(i));
    return 0;
}