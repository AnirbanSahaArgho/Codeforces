#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a,ll b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}
int main()
{
    ll l,r,a,b,c;
    cin>>l>>r;
    for(ll i=l;i<=r;i++)
    {
        a=i;
        for(ll j=a+1;j<=r;j++)
        {
            b=j;
            for(ll k=b+1;k<=r;k++)
            {
                c=k;
                if(gcd(a,b)==1 && gcd(b,c)==1 && gcd(a,c)!=1)
                {
                    cout<<a<<" "<<b<<" "<<c<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"-1"<<endl;
    return 0;
}