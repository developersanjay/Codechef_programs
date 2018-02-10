#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,a;
    a[0]='0',a[1]='0',a[2]='0',a[3]='0';
    long i,j,T,l=0,k;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>s;
        for(j=0;j<s.size();j++)
        {
         for(k=j;k<j+4;k++)
         {
          if(s[k]=='c')
          { a[0]++; }
          else if(s[k]=='e')
          { a[1]++; }
          else if(s[k]=='f')
          { a[2]++; }
          else if(s[k]=='h')
          { a[3]++; }
       }
       if((a[0]=='1')&&(a[1]=='1')&&(a[2]=='1')&&(a[3]=='1'))
           l++; a[0]='0',a[1]='0',a[2]='0',a[3]='0';
     }
          if(l>0)
          cout<<"lovely "<<l<<endl;
          else
          cout<<"normal "<<endl;
          l=0;
   }
    return 0;
}
