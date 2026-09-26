#include<stdio.h>
int main()
{
    int n,x=0,i,j;
    scanf("%d",&n);
    char ch[100];
    for(j=0;j<n;j++)
    {
        scanf("%s",ch);
        if(ch[0]=='T')
        {
            x+=4;
        }
        else if(ch[0]=='C')
        {
            x+=6;
        }
        else if(ch[0]=='O')
        {
            x+=8;
        }
        else if(ch[0]=='D')
        {
            x+=12;
        }
        else if(ch[0]=='I')
        {
            x+=20;
        }
    }
    printf("%d",x);
    return 0;
}