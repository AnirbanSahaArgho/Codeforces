#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,d,m=0;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(b>a)
            m++;
        if(c>a)
            m++;
        if(d>a)
            m++;
        printf("%d
",m);
    }
    return 0;
}