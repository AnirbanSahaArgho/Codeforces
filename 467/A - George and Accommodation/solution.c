#include<stdio.h>
int main()
{
    int n,p,q,dif,sum=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&p,&q);
        dif=q-p;
        if(dif>=2)
        {
            sum+=1;
        }
    }
    printf("%d",sum);
    return 0;
}