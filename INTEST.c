#include<stdio.h>
int main()
{
    int i=1,n,k,l=0,m=0;
    scanf("%d %d",&n,&k);
    if(n>=0 && k>=0)
    {
    for(i=1;i<=n;i++)
    {
        scanf("%d",&m);
        if(m%k==0)
        {
            l++;
        }
    }
    printf("%d",l);

    return 0;
}
}
