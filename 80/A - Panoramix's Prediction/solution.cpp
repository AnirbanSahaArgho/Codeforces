#include<bits/stdc++.h>
using namespace std;
bool isprime(int i)
{
    for(int j=2;j<i;j++)
    {
        if(i%j==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n,m,x;
    cin>>n>>m;
    for(int i=n+1;;i++)
    {
        if(isprime(i))
        {
            x=i;
            break;
        }
    }
    if(m==x)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}