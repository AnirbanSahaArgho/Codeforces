#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,res,i;
    scanf("%d",&n);
    for(i=1,res=1;i!=0;i=i*2+2,res++)
    {
        if(i>=n)
        {
            printf("%d
",res);
            break;
        }
    }
    }
    return 0;
}