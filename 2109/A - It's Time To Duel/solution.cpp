#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        int player[n];
        bool flag=false;
        for (int i = 0; i < n; i++)
        {
            cin>>player[i];
            if(player[i]==0) count++;
        }
        for (int i = 1; i < n; i++)
        {
            if(player[i-1]==0 && player[i]==0)
            {
                flag=true;
                break;
            }
        }
        if(count==0) cout<<"YES"<<endl;
        else if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}