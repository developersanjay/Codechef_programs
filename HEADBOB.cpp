#include<iostream>
#include<string>
using namespace std;
int main()
{
    long t,n,i,l=0,y=0;
    int a;
    a=11/2;
    cout<<a;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='I')
            {l++;}
            else if(s[i]=='Y')
            {y++;}

        }
        if((l==0)&&(y>0))
        {cout<<"NOT INDIAN ";}
        else if((y==0)&&(l>0))
        {cout<<"INDIAN ";}
        else
        {cout<<"NOT SURE ";}

        l=0;y=0;
    }



    return 0;
}
