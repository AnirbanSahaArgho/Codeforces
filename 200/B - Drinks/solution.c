#include<stdio.h>
 
int main()
{
    int a;
    float sum=0.0;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++)
    {
        sum+=arr[i];
    }
    float d=sum/a;
    printf("%f",d);
    return 0;
}