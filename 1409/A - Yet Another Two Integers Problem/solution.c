#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,dif;
        scanf("%d%d",&a,&b);
        dif=abs(a-b);
        if(dif==0)
        {
            printf("0
");
        }
        else
        {
            if(dif%10==0)
            {
                printf("%d
",dif/10);
            }
            else
            {
                printf("%d
",(dif+10)/10);
            }
        }
    }
    return 0;
}