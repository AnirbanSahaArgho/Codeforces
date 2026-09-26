#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        char c;
        cin>>a>>b;
        c=a[0];
        a[0]=b[0];
        b[0]=c;
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}