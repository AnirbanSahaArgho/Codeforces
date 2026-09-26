#include<stdio.h>
 
int main()
{
    int n,i,j,s=0,d=0,x=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0,j=n-1;;)
    {
        if(x%2==0)
        {
            if(a[i]>a[j])
            {
                s+=a[i];
                i++;
            }
            else
            {
                s+=a[j];
                if(i==j)
                    break;
                j--;
            }
        }
        else{
            if(a[i]>a[j])
            {
                d+=a[i];
                i++;
            }
            else
            {
                d+=a[j];
                if(i==j)
                    break;
                j--;
            }
        }
        x++;
    }
    printf("%d %d",s,d);
    return 0;
}