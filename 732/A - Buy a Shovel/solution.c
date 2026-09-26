#include<stdio.h>
int main()
{
    int k,r,j=0;
    scanf("%d%d",&k,&r);
    int s=k;
    while(1)
    {
        if(s%10==0 || s%10==r){ break; }
        j++;
        s+=k;
    }
    printf("%d",j+1);
    return 0;
}