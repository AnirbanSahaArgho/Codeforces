#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    long long a[m],count=0,current=1;
    for(long long i=0;i<m;i++)
    {
        cin>>a[i];
        if(a[i]<current)
        {
            count+=(n-current)+a[i];
            current=a[i];
        }
        else
        {
            count+=a[i]-current;
            current=a[i];
        }
    }
    cout<<count<<endl;
    return 0;
}