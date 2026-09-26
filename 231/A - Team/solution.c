#include<stdio.h>
int main()
{
    int p,v,t,n,count=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d%d",&p,&v,&t);
        if(p==1 && v==1 && t==1)
        {
            count++;
        }
        else if(p==1 && v==1)
        {
            count++;
        }
        else if(p==1 && t==1)
        {
            count++;
        }
        else if(v==1 && t==1)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}