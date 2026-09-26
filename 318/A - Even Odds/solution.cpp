#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int n,k,x;
    cin>>n>>k;
    x=(n+1)/2;
    if(k<=x){
        cout<<2*k-1<<endl;
    }else{
        cout<<2*(k-x)<<endl;
    }
    return 0;
}