#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
int compare(const void *a,const void *b)
{
    return (*(char *)a-*(char *)b);
}
 
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int sum=0,n;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);
 
        qsort(s,strlen(s),sizeof(char),compare);
 
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]!=s[i-1]) sum+=2;
            else sum++;
        }
 
        printf("%d
",sum);
    }
    return 0;
}