#include<stdio.h>
int main()
{
    char s1[101];
    int a=0;
    scanf("%s",s1);
    for(int i=1;s1[i]!='\0';i++)
    {
        if((s1[i-1]=='0' && s1[i]=='0')||(s1[i-1]=='1' && s1[i]=='1'))
            a++;
        else
            a=0;
        if(a==6)
            break;
    }
    switch(a)
    {
    case 6:
        {
            printf("YES");
            break;
        }
    default:
        {
            printf("NO");
        }
    }
    return 0;
}