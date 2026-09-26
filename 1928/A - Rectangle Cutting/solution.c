#include<stdio.h>
void solve(int a,int b)
{
    if(a%2==0 && b%2==0)
    {
        printf("Yes
");
    }
    else if(a%2==0 && b%2!=0)
    {
        if(a/2==b && b*2==a)
            printf("No
");
        else
            printf("Yes
");
    }
    else if(a%2!=0 && b%2==0)
    {
        if(a*2==b && b/2==a)
            printf("No
");
        else
            printf("Yes
");
    }
    else
    {
        printf("No
");
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        solve(a,b);
    }
    return 0;
}