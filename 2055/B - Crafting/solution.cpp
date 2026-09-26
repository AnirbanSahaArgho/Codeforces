#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t;
    cin >> t;
 
    while (t--)
    {    
        int n;
        cin >> n;
        int a[n],b[n],diff=0,max=-1,max_point=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<n;i++)
        {
            if(b[i]>=a[i]) diff=b[i]-a[i];
            if(diff>max)
            {
                max=diff;
                max_point=i;
            }
        }
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            if(i==max_point) continue;
            if(a[i]-max < b[i]) flag=false;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }    
    return 0;
}