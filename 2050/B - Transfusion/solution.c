#include<stdio.h>
int main()
{
    int t,i,a,n;
    scanf("%d",&t);
    while(t--)
    {
        long long int sum1=0,sum2=0,i;
        int j=0,k=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            if(i%2!=0)
            {sum2+=a;}
            else
            {
                sum1+=a;
            }
        }
        j=(n+1)/2;
        k=n-j;
        if(sum1%j==0 && sum2%k==0 && (sum1+sum2)%n==0 && (sum1/j)==(sum2/k))
        {
            printf("YES
");
        }
        else
        {
            printf("NO
");
        }
    }
    return 0;
}