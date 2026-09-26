#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4],x=0;
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')x+=a[0];
        else if(s[i]=='2')x+=a[1];
        else if(s[i]=='3')x+=a[2];
        else x+=a[3];
    }
    cout<<x<<endl;
    return 0;
}