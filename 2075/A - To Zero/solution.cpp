#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x,count;
        cin>>n>>k;
        if(n%2==0)
        {
            count=n/(k-1);
            x=n-count*(k-1);
            if(x==0)
            {
                cout<<n/(k-1)<<endl;
            }
            else
            {
                cout<<n/(k-1)+1<<endl;
            }
        }
        else
        {
            n-=k;
            count=n/(k-1);
            x=n-count*(k-1);
            if(x==0)
            {
                cout<<n/(k-1)+1<<endl;
            }
            else
            {
                cout<<n/(k-1)+2<<endl;
            }
        }
    }
    return 0;
}