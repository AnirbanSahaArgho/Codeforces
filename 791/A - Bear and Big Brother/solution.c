#include<stdio.h>
int main()
{
    int l,b,count=0;
    scanf("%d%d",&l,&b);
    while(l<=b)
    {
        l*=3;
        b*=2;
        count++;
    }
    printf("%d",count);
    return 0;
}