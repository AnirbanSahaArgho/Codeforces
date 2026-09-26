#include<stdio.h>
#include<string.h>
int main()
{
    char s[301];
    scanf("%s",s);
    int i,x=0;
    for(i=0;s[i]!='\0';)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B' && x==1)
        {
            i+=3;
            printf(" ");
            x=0;
        }
        else if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            i+=3;
        }
        else{
            printf("%c",s[i]);
            x=1;
            i++;
        }
    }
    return 0;
}