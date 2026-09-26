#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
        {
            x=1;
            break;
        }
    }
    if(x==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}