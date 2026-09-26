#include<stdio.h>
 
int main()
{
    long long int a,n,m,b,c,sum=0;
    scanf("%lld%lld%lld",&n,&m,&a);
    b=n/a;
    c=m/a;
    if(n%a!=0 && m%a!=0)
    {
        sum=(b*c)+b+c+1;
    }
    else if(n%a!=0 && m%a==0)
    {
        sum=(b*c)+c;
    }
    else if(m%a!=0 && n%a==0)
    {
        sum=(b*c)+b;
    }
    else
    {
        sum=b*c;
    }
    printf("%lld",sum);
    return 0;
}