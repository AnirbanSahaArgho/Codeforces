#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,x,first,last;
    cin>>n>>x;
    int door[n];
    for (int i = 0; i < n; i++)
    {
        cin>>door[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(door[i]==1)
        {
            first=i;
            break;
        }
    }
    for (int i = n-1; i >= 0; i--)
    {
        if(door[i]==1)
        {
            last=i;
            break;
        }
    }
    if(last-first+1 <= x) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
 
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}