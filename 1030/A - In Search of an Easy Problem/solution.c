#include<stdio.h>
int main()
{
    int n,x,f=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&x);
        if(x==1)
        {
            f=1;
        }
    }
    if(f==0)
    {
        printf("EASY");
    }
    else
    {
        printf("HARD");
    }
    return 0;
}