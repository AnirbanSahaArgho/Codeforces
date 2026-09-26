#include<stdio.h>
int main()
{
    int a,b,min,i=0;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        min=b;
        a-=b;
        while(a>=2)
        {
            i++;
            a-=2;
        }
        printf("%d %d",min,i);
    }
    else{
        min=a;
        b-=a;
        while(b>=2)
        {
            i++;
            b-=2;
        }
        printf("%d %d",min,i);
    }
    return 0;
}