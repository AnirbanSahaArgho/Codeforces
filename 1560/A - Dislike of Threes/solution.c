#include<stdio.h>
#include<stdlib.h>
int compare(void const *a,void const *b)
{
     return (*(int *)a-*(int *)b);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,j,k;
        scanf("%d",&k);
        for(i=1,j=1;j<=k;i++)
        {
            if(i%3==0 || i%10==3)
            {
                continue;
            }
            j++;
            if(j>k)
                break;
        }
        printf("%d
",i);
    }
    return 0;
}