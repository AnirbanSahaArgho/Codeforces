#include<stdio.h>
int main()
{
    int a,x=0,y=0;
    scanf("%d",&a);
    while(a--)
    {
        int m,c;
        scanf("%d%d",&m,&c);
        if(m>c)
        {
            x++;
        }
        else if(m<c)
        {
            y++;
        }
    }
    if(x>y)
    {
        printf("Mishka");
    }
    else if(x==y)
    {
        printf("Friendship is magic!^^");
    }
    else
    {
        printf("Chris");
    }
    return 0;
}