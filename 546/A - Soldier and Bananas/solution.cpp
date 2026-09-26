#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w,sum=0;
    cin>>k>>n>>w;
    sum=(w*(w+1)/2)*k;
    if((sum-n)>0) cout<<sum-n<<endl;
    else cout<<"0"<<endl;
    return 0;
}