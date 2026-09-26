#include<stdio.h>
#include<stdlib.h>
int cmpfunc(const void * a,const void * b)
{
    return(*(int*)a-*(int*)b);
}
int main()
{
    int n,a,i;
    double maxdiff,diff;
    scanf("%d%d",&n,&a);
    int num[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    qsort(num,n,sizeof(int),cmpfunc);
    maxdiff=num[0];
    for(i=1;i<n;i++)
    {
        diff=(float)(num[i]-num[i-1])/2;
        if(diff>maxdiff)
        maxdiff=diff;
    }
    diff=a-num[n-1];
    {if(diff>maxdiff)
        maxdiff=diff;}
        printf("%.9lf",maxdiff);
}