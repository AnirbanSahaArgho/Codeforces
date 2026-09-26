#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,i=0,x=0;
        cin>>n;
        while(n!=1)
        {
            if(n%6==0)
            {
                n/=6;
                i++;
            }
            else if(n%2==0 && n%6!=0 && (n*2)%6==0)
            {
                n*=2;
                i++;
            }
            else if(n%2!=0)
            {
                n*=2;
                i++;
            }
            else{
                cout<<"-1"<<endl;
                x=1;
                break;
            }
        }
        if(x==0) cout<<i<<endl;
    }
    return 0;
}