#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main()
{
    div_t divr;
    string a[100000],b[100000],n,c;
    int t,i,j,x=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<t;i++)
    {
        for(j=0;j<a[i].length();j++)
        {
            n=a[i];
            while(n.length()!=0)
            {
                divr=div(n,10);
                if(divr==4)
                {
                    x++;
                }
                n=n/10;
            }
            b[i]=x;
            x=0;
        }
    }
    for(i=0;i<t;i++)
    {
        cout<<b[i]<<endl;
    }

    return 0;
}
