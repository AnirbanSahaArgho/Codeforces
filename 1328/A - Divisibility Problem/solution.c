#include<stdio.h>
int main()
{
    int t,a,b,c,d;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        if(a%b==0)
            printf("%d
",a%b);
        else
        {
            c=a/b;
            d=(c+1)*b ;
            printf("%d
",d-a);
        }
    }
    return 0;
}