#include<iostream>
#include<stdlib.h>
using namespace std;
void merge(long a[],long low,long mid,long high)
{
    long lo,i,mi,k,temp[100000];
    lo=low;
    i=low;
    mi=mid+1;
    while(lo<=mid && mi<=high)
    {
        if(a[lo]<=a[mi])
        { temp[i]=a[lo]; lo++; }
        else
        { temp[i]=a[mi]; mi++; }
        i++;
    }
    if(lo>mid)
    {
        for(k=mi;k<=high;k++)
        {
            temp[i]=a[k]; i++;
        }
    }
    else
    {
        for(k=lo;k<=mid;k++)
        { temp[i]=a[k]; i++; }
    }
    for(k=low;k<=high;k++)
    { a[k]=temp[k]; }
};
void partition(long a[],long low,long high)
{
    long mid;
    if(low<high)
    {
        mid=(low+high)/2;
        partition(a,low,mid);
        partition(a,mid+1,high);
        merge(a,low,mid,high);
    }
};

int main()
{
    long t,low=0,a[100000],i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a[i];
    }
    partition(a,low,t-1);

    for(i=0;i<t;i++)
    {
        cout<<a[i]<<" ";
    }
   return 0;
}
