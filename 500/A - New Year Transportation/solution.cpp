#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    bool flag=false;
    cin>>n>>t;
    int a[n-1];
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<=t-1;)
    {
        i+=a[i];
        if(i==t-1)
        {
            flag=true;
            break;
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 
    return 0;
}