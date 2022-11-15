#include<iostream>
using namespace std;


int main()
{
    int m1,m2,n,x,sum=0,time1,time2,x1,x2;
    cin>>m1>>m2>>n;
    int population[n];
    for(int i=0;i<n;i++)
    {
        cin>>population[i];
        sum+=population[i];
    }
    x=(m1*sum)/(m1+m2);
    if(x>(sum-x))
    {
        if(m1>m2)
        {
            time1=m1*(sum-x);
            time2=m2*x;
        }
        else
        {
            time1=m1*x;
            time2=m2*(sum-x);
        }
    }
    else
    {
        if(m1>m2)
        {
            time1=m1*x;
            time2=m2*(sum-x);
        }
        else
        {
            time1=m1*(sum-x);
            time2=m2*x;
        }
    }
    if(time1>time2)
    cout<<time1;
    else
    cout<<time2;
    return 0;
}