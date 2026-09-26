#include <stdio.h>
 
int count(int a[],int n)
{
    int c=0,b=0,sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum==0)
            continue;
        if(sum<0)
        {
            if(b>0)
        {
            b+=sum;
            sum=0;
        }
            else
        {
            c++;
            sum=0;
        }
        }
        else if(sum>0)
        {
            b+=sum;
            sum=0;
        }
    }
    return c;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",count(a,n));
    return 0;
}