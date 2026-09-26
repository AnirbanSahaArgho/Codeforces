#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,pro=1;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for (int i = 0; i < n; i++)
        {
            if(i==0) a[i]+=1;
            pro*=a[i];
        }
        cout<<pro<<endl;
    }
    return 0;
}