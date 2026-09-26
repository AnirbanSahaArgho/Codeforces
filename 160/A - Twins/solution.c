#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b)
{
    return (*(int *)b-*(int *)a);
}
int main()
{
    int n,x=0,y=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        x+=a[i];
    }
    qsort(a,n,sizeof(int),compare);
    for(i=0;i<n;i++)
    {
        y+=a[i];
        x-=a[i];
        if(y>x)
        break;
    }
    printf("%d
",i+1);
    return 0;
}