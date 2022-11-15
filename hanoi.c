#include<stdio.h>
void hanoi(n,A,B,C)
{
    if(n!=0)
    {
        hanoi(n-1,A,C,B);
        printf("Move disk %d from %c to %c\n",n,A,C);
        hanoi(n-1,B,A,C);
    }
}
int main()
{
    char A='A',B='B',C='C';
    int n;
    printf("Enter no of disk - ");
    scanf("%d", &n);
    printf("\nHanoi tower solution is - \n");
    hanoi(n,A,B,C);
    return 0;
}