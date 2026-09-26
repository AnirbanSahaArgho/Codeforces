#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p,coin1=0,coin2=0,t;
        cin>>p;
        t=p/3;
        p-=t*3;
        coin1+=t;
        coin2+=t;
        if(p>0 && p%2==0) coin2++;
        else if(p>0) coin1++;
        cout<<coin1<<" "<<coin2<<endl;
    }
    return 0;
}