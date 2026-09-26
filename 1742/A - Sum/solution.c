#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(a==b+c)
        {
            printf("YES
");
        }
        else if(b==a+c)
        {
            printf("YES
");
        }
        else if(c==a+b)
        {
            printf("YES
");
        }
        else
        {
            printf("NO
");
        }
    }
    return 0;
}