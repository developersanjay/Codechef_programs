#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{

    int l=0,p=0,l1=0,l2=0,n,p1,p2,c1=0,c2=0,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>p1;
        cin>>p2;
        c1=c1+p1;
        c2=c2+p2;
        if(c1>c2)
        {
            l=c1-c2;
        }
        else
        {
            p=c2-c1;
        }
        if(l>l1)
        {
            l1=l;
        }
        if(p>l2)
        {
            l2=p;
        }
    }
   if(l1>l2)
      cout<<"1 "<<l1;
   else
    cout<<"2 "<<l2;

return 0;
}
