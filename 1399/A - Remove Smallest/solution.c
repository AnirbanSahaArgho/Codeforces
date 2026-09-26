#include<stdio.h>
#include<stdlib.h>
#include<math.h>
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
        int n,x=0;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        qsort(a,n,sizeof(int),compare);
        for(int i=1;i<n;i++)
        {
            if(abs(a[i-1]-a[i])>1)
            {
                x=1;
            }
        }
        if(x==1)
        {
            printf("NO
");
        }
        else
        {
            printf("YES
");
        }
    }
    return 0;
}