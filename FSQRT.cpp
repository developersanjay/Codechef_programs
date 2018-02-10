#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int T,i,n,u=0,b[100000],c[100000],k=0;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>n;
        while(n!=0)
        {
            c[k]=n%10;
            n=n/10;
            if(n==0)
            {
                u=c[0]+c[k];
            }
            k++;
        }
        k=0;
        b[i]=u;
        u=0;
    }
    for(i=0;i<T;i++)
    {
        cout<<b[i]<<endl;
    }
    return 0;
}
