#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,p,f=0;
    char s[1000],c[1000];
    scanf("%s%s",s,c);
    n=strlen(s);
    p=strlen(c);
    if(n!=p)
    {
        printf("NO");
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(s[i]!=c[n-i-1])
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    return 0;
}