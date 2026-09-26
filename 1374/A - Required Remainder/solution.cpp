#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,y,n,z;
        cin>>x>>y>>n;
        z=(n-y)/x;
        cout<<(z*x)+y<<endl;
    }
    return 0;
}