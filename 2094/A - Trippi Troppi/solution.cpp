#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string a;
        getline(cin,a);
        for(int i=0;i<a.size();i++)
        {
            if(i==0 || a[i-1]==' ') cout<<a[i];
        }
        cout<<endl;
    }
    return 0;
}