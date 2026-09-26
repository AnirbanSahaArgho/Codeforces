#include<stdio.h>
int main()
{
    int n,k,j,count=0;
    scanf("%d%d",&n,&k);
    j=(60*4)-k;
    for(int t=0,i=1;i<=n;i++)
    {
        t+=(i*5);
        if(t>j)
            break;
        count++;
    }
    printf("%d",count);
    return 0;
}