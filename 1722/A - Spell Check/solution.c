#include<stdio.h>
 
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x=1,count_t=0,count_i=0,count_m=0,count_u=0,count_r=0;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]=='T') count_t++;
            else if(s[i]=='i') count_i++;
            else if(s[i]=='m') count_m++;
            else if(s[i]=='u') count_u++;
            else if(s[i]=='r') count_r++;
            else{
                x=0;
                break;
            }
        }
        if(count_t==1 && count_i==1 && count_m==1 && count_u==1 && count_r==1 && x==1) printf("YES
");
        else printf("NO
");
    }
    return 0;
}