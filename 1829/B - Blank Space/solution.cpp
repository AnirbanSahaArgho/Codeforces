#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,current=0,previous=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==0) current++;
            if(a[i]==1)
            {
                if(current>=previous)
                {
                    previous=current;
                    current=0;
                }
                else{
                    current=0;
                }
            }
        }
        if(a[n-1]==0)
        {
            if(current>=previous) cout<<current<<endl;
            else cout<<previous<<endl;
        }
        else cout<<previous<<endl;
    }
    return 0;
}