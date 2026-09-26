#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x=1;
        string s;
        cin>>n>>s;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1]) continue;
            for(int j=i-1;j>=0;j--)
            {
                if(s[i]==s[j])
                {
                    x=0;
                    break;
                }
            }
            if(x==0) break;
        }
        if(x==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}