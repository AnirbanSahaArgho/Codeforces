#include<stdio.h>
 
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int odd=0,even=0,x,i,n;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&x);
            if(x%2 != i%2)
            {
                if(x%2==0) odd++;
                else even++;
            }
        }
        if(odd==even) printf("%d
",odd);
        else printf("-1
");
    }
    return 0;
}