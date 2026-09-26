#include<stdio.h>
 
int main()
{
    int t;
    scanf("%d",&t);
    char s1[]="codeforces";
    while(t--)
    {
        char s2[11];
        int x=0;
        scanf("%s",s2);
        for(int i=0;s2[i]!='\0';i++)
        {
            if(s2[i]!=s1[i])
            {
                x++;
            }
        }
        printf("%d
",x);
    }
    return 0;
}