#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n,m,sum=0,count=0; cin>>n>>m;
    string str;
    for(int i=0; i<n; i++){
      cin>>str; sum += str.size();
      if(sum <= m){ count++; }
    } 
    cout<<count<<endl;
}
int main() {
  int t; cin>>t;
  while(t--){
    solve();
  }
    return 0;
}