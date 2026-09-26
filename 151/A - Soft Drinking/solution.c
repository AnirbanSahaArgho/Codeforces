#include<stdio.h>
int toastnumber(int n,int k,int l,int c,int d,int p,int nl,int np)
{
    int a,b,i,j=0,x;
    a=k*l,b=c*d;
    while(a>=nl && b>=1 && p>=np)
    {
        a-=nl,b-=1,p-=np;
        j++;
    }
    return j/n;
}
int main()
{
    int n,k,l,c,d,p,nl,np;
    scanf("%d%d%d%d%d%d%d%d",&n,&k,&l,&c,&d,&p,&nl,&np);
    printf("%d",toastnumber(n,k,l,c,d,p,nl,np));
    return 0;
}