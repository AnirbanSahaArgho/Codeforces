#include<stdio.h>
int main()
{
    int count1=0,count2=0,count3=0,i;
    char s[100];
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='1')
        {
            count1++;
        }
        else if(s[i]=='2')
        {
            count2++;
        }
        else if(s[i]=='3')
        {
            count3++;
        }
    }
    for(i=0;i<count1;i++)
    {
        if(i>0)
        {
            printf("+");
        }
        printf("1");
    }
    for(i=0;i<count2;i++)
    {
        if(count1>0 || i>0)
        {
            printf("+");
        }
        printf("2");
    }
    for(i=0;i<count3;i++)
    {
        if(count1>0 || count2>0 || i>0)
        {
            printf("+");
        }
        printf("3");
    }
    return 0;
}