#include<iostream>
using namespace std;


int main()
{
    int n,k=0,count=1;
    cin>>n;
    int size=n*2;
    int vertex[size],slope[n];
    for(int i=0;i<size;i++)
    cin>>vertex[i];
    for(int i=0;i<size-3;i=i+2)
    {
        if(vertex[i+2]==vertex[i])
        slope[k++]=1000;
        else
        slope[k++]=(vertex[i+3]-vertex[i+1])/(vertex[i+2]-vertex[i]);
    }
    for(int i=1;i<n;i++)
    {
        if(slope[i]!=slope[i-1])
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}