#include<iostream>
#include<string>
using namespace std;
int main()
{
    long i,n,t,e=0,o=0,c;
    long s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        c=s%2;
        if(c==0)
        {e++;}
        else
        {o++;}
    }
    if(e>o)
    {cout<<"READY FOR BATTLE ";}
    else
    {cout<<"NOT READY ";}
    return 0;
}
