#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,a,b; cin>>n>>m>>a>>b;
        int x = min(a,n-a+1);
        int y = min(b,m-b+1);
        int p = 1+ceil(log2(m))+ceil(log2(x));
        int q = 1+ceil(log2(n))+ceil(log2(y));
        cout<<min(p,q)<<endl;
    } 
    return 0;
}
 
//Got idea from krishno