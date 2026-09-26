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
        int l=s.size();
        cout<<s[0];
        for(int i=1;i<l;i+=2)
        {
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}