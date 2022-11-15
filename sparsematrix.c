#include<stdio.h>
int main()
{
    int a[3][4],count=0,k=0;
    printf("Enter the array : ");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d", &a[i][j]);
            if(a[i][j]!=0)
            count++;
        }
    }
    int b[3][count];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(a[i][j]!=0)
            {
                b[0][k]=i;
                b[1][k]=j;
                b[2][k]=a[i][j];
                k++;
            }
        }
    }
    printf("Sparse matric is - \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<count;j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}