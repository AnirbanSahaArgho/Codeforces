#include<stdio.h>
int main()
{
    int y,w,m;
    scanf("%d%d",&y,&w);
    m=(y>w)?y:w;
    switch(6-m)
    {
    case 0:
        {
            printf("1/6");
            break;
        }
    case 1:
        {
            printf("1/3");
            break;
        }
    case 2:
        {
            printf("1/2");
            break;
        }
    case 3:
        {
            printf("2/3");
            break;
        }
    case 4:
        {
            printf("5/6");
            break;
        }
    case 5:
        {
            printf("1/1");
        }
    }
    return 0;
}