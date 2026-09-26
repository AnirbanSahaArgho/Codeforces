#include<stdio.h>
#include<stdlib.h>
 
int main() {
    int n,x=0,a;
    scanf("%d",&n);
    if(n%4==0 || n%7==0 || n%47==0)
        {
            goto level;
        }
    while(n)
    {
        a=n%10;
        if (a!=4 && a!=7)
        {
            x=1;
            break;
        }
        n/=10;
    }
    level:
    if(x==0) printf("YES");
    else printf("NO");
    return 0;
}