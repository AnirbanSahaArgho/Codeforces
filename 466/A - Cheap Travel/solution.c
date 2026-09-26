                      /*JOY SHREE KRISHNO*/
 
 
#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b)
{
    return (*(int *)a-*(int *)b);
}
int main() {
    int n,m,a,b,sm,t;
    int c[3];
    scanf("%d%d%d%d",&n,&m,&a,&b);
    t=n;
    sm=n/m;
    n-=sm*m;
    c[0]=(sm*b)+(n*a);
    c[1]=t*a;
    c[2]=(sm+1)*b;
    qsort(c,3,sizeof(int),compare);
    printf("%d
",c[0]);
    return 0;
}