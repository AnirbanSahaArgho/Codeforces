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
        int a[3];
        for(int i=0;i<3;i++)
        {
            scanf("%d",&a[i]);
        }
        qsort(a,3,sizeof(int),compare);
        printf("%d
",a[1]);
    }
    return 0;
}