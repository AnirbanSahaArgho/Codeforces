#include<stdio.h>
 
int main()
{
    int n,a,b,c,col1=0,col2=0,col3=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d%d",&a,&b,&c);
        col1+=a;
        col2+=b;
        col3+=c;
    }
    if(col1==0 && col2==0 && col3==0) printf("YES");
    else printf("NO");
    return 0;
}