#include<stdio.h>
int main()
{
    int n,i,j,sum=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                sum++;
            }
        }
    }
    printf("%d",sum);
    return 0;
}