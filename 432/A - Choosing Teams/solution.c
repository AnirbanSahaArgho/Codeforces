#include<stdio.h>
int main()
{
    int n,k,x=0;
    scanf("%d%d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(5-a[i]>=k)
        {
            x++;
        }
    }
    printf("%d
",x/3);
    return 0;
}