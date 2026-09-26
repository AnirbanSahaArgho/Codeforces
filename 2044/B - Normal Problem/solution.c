#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        char a[101];int j=0;
        scanf("%s",a);
        for(int i=0;a[i]!='\0';i++)
        {
            j++;
        }
        for(int i=j-1;i>=0;i--)
        {
            if(a[i]=='w')
                printf("w");
            else if(a[i]=='p')
                printf("q");
            else if(a[i]=='q')
                printf("p");
        }
        printf("
");
    }
    return 0;
}