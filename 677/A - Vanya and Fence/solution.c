#include<stdio.h>
int main()
{
    int n,h,a,w=0;
    scanf("%d%d",&n,&h);
    while(n--)
    {
        scanf("%d",&a);
        if(a>h)
        {
            w+=2;
        }
        else
        {
            w++;
        }
    }
    printf("%d",w);
    return 0;
}