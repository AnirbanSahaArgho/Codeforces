#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0,a;
    cin>>n;
    if(n>100)
    {
        i+=(n/100);
        n%=100;
    }
    if(n>=20&&n<100)
    {
        i+=(n/20);
        n%=20;
    }
    if(n>=10&&n<20)
    {
        i+=(n/10);
        n%=10;
    }
    if(n>=5&&n<10)
    {
        i+=(n/5);
        n%=5;
    }
    if(n>0&&n<5)
    {
        i+=(n/1);
    }
    cout<<i<<endl;
    return 0;
}