#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(k==0)
        {
            for(int i=0;i<n;i++)
            {
                cout<<"0";
            }
            cout<<endl;
        }
        else if(n>k)
        {
            cout<<"1";
            for (int i = 1; i < n-k; i++)
            {
                cout<<"0";
            }
            for (int i = 1; i < k; i++)
            {
                cout<<"1";
            }
            cout<<"0"<<endl;
        }
        else
        {
            for (int i = 0; i < k; i++)
            {
                cout<<"1";
            }
            cout<<endl;
        }
    }
 
    return 0;
}