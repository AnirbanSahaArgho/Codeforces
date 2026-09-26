#include<stdio.h>
int main()
{
    char a[1000],b[1000];
    scanf("%s%s",a,b);
    for(int i=0,j=0;a[i]!='\0';i++,j++)
    {
        if(a[i]==b[j])
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
    }
    return 0;
}