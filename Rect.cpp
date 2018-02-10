#include<iostream>
using namespace std;
int main()
{
    int i,T,a[10000],b[10000],c[10000],d[10000];
    cin>>T;
    for(i=0;i<T;i++)
    {
     cin>>a[i]>>b[i]>>c[i]>>d[i];
    }
    for(i=0;i<T;i++)
    {
        if(((a[i]==b[i])&&(c[i]==d[i]))||((a[i]==c[i])&&b[i]==d[i])||((a[i]==d[i])&&(b[i]==c[i])))
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
   return 0;
}
