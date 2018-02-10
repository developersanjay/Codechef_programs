#include<iostream>
using namespace std;
int main()
{
    int N,i,c=0,m,a[100];
    cin>>N;
    for(i=0;i<N;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<N;i++)
    {
        if(a[i]==1)
        {
          c++;
        }

    }
    if(c%2==0)
    {
        m=(c/4)+1;
        cout<<m;
    }
    else
    {
        c=c/2;
        m=((c+1)/2)+1;
        cout<<m;
    }
    return 0;
}
