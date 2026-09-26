#include<stdio.h>
#include<string.h>
int main()
{
    int n,t,i;
    scanf("%d%d",&n,&t);
    char s[n];
    scanf("%s",s);
    for(i=0;i<t;i++)
    {
        int j=0;
        while(j<n)
        {
            if(s[j]=='B' && s[j+1]=='G')
            {
                s[j]='G';
                s[j+1]='B';
                j+=2;
            }
            else
            {
                j++;
            }
        }
    }
    printf("%s",s);
    return 0;
}