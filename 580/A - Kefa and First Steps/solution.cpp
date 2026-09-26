#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=1,max=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            if(sum>max) max=sum;
            sum=1;
        }
        else sum++;
    }
    if(sum>max) max=sum;
    cout<<max<<endl;
    return 0;
}