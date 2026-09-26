#include<stdio.h>
#include<string.h>
int main()
{
    int i,n=0;
    char s[100];
    scanf("%s",s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='4'||s[i]=='7')
        {
            n++;
        }
    }
    if(n==4||n==7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}