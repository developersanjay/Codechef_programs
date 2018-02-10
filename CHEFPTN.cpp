#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    long t,n,m,x,k,i,j,e=0,o=0;
      cin>>t;
    for(i=0;i<t;i++)
    {
      cin>>n; cin>>m; cin>>x; cin>>k;
       cin>>s;
        for(j=0;j<k;j++)
         {
          if(s[j]=='E') e++;
            else o++;
         }
        for(j=1;j<=m;j++)
        {
            if(j%2==1)
            {
                if(o>=x) {n=n-x; o=o-x;}
                else {n=n-o; o=0;}
            }
           else
           {
               if(e>=x) {n=n-x; e=e-x;}
               else {n=n-e; e=0;}
          }

       }
       if(n>0) cout<<"no ";
        else cout<<"yes ";
        e=0; o=0;

  }
    return 0;
}
