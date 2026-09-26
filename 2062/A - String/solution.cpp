#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int j=0;
        string a;
        cin>>a;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]=='1') j++;
        }
        cout<<j<<endl;
    }
    return 0;
}