#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int a,x,y,z,d,e;
        scanf("%lld%lld%lld%lld",&a,&x,&y,&z);
        e=a/(x+y+z);
        d=e*3;
        a=a-((x+y+z)*e);
        if(a>0)
        {
            a-=x;
            d++;
            if(a>0)
            {
                a-=y;
                d++;
            }
            if(a>0)
            {
                a-=z;
                d++;
            }
            printf("%lld
",d);
 
        }
        else if(a==0)
            printf("%lld
",d);
    }
    return 0;
}