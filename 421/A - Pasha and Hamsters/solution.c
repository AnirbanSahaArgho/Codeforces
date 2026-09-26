#include<stdio.h>
int main()
{
    int i,n,a,b,j;
    scanf("%d%d%d",&n,&a,&b);
    int ar[a],al[b];
    for(i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<b;i++)
    {
        scanf("%d",&al[i]);
    }
    for(i=1;i<=n;i++)
    {
        int f=0;
        for(j=0;j<a; j++)
        {
            if(i==ar[j])
            {
                f=1;
            }
        }
        if(f==1)
        printf("1 ");
        else
        printf("2 ");
    }
    return 0;
}