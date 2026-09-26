#include<stdio.h>
#include<math.h>
int main()
{
    int n,max=0,x=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
            max=a[i];
    }
    for(int i=0;i<n;i++)
    {
        x+=max-a[i];
    }
    printf("%d",x);
    return 0;
}