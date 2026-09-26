#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int i=s.size(),x=0;
        for(int j=1;j<i;j++)
        {
            if(s[j]==s[j-1]) 
            {
                x=1;
                break;
            }
        }
        if(x==0) cout<<i<<endl;
        else cout<<"1"<<endl;
    }
    return 0;
}