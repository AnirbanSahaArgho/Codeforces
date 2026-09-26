#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int i,f=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='c' && s[i+1]=='a')
            {
                f=1;
                break;
            }
        }
        if(f==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}