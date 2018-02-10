#include<iostream>
int sum(int l);
using namespace std;
int main()
{
    int t,b,c=0,a;
    cin>>t;
    while(t--)
    {
        cin>>b;
        c=(b-2)/2;
        if(c==-1)
         {c=0;
         cout<<c<<endl;}
        else
        {a=sum(c);
       cout<<a<<endl;}
    }

    return 0;
}
int sum(int l)
{
     return (l*(l+1)/2);

}
