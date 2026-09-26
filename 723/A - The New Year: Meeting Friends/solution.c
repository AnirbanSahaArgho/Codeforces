#include<stdio.h>
int maximum(int a,int b,int c){
    int max;
    if(a>b)
    {
        if(a>c)
        {
            max=a;
        }
        else
        {
            max=c;
        }
    }
    else
    {
        if(b>c)
        {
            max=b;
        }
        else
        {
            max=c;
        }
    }
    return max;
}
int minimum(int a,int b,int c)
{
    int min;
    if(a<b)
    {
        if(a<c)
        {
            min=a;
        }
        else
        {
            min=c;
        }
    }
    else
    {
        if(b<c)
        {
            min=b;
        }
        else
        {
            min=c;
        }
    }
    return min;
}
int midium(int a,int b,int c){
    int mid;
    if(a>b)
    {
        if(a<c)
            mid=a;
        else if(b<c)
            mid=c;
        else
            mid=b;
    }
    else{
        if(b<c)
            mid=b;
        else if(a<c)
            mid=c;
        else
            mid=a;
    }
    return mid;
}
int main()
{
    int a,b,c,mid,max,min;
    scanf("%d%d%d",&a,&b,&c);
    max=maximum(a,b,c);
    min=minimum(a,b,c);
    mid=midium(a,b,c);
    printf("%d",(max-mid)+(mid-min));
    return 0;
}