#include<bits/stdc++.h>
using namespace std;
bool ddigits(int num){
    int seen[10]={0,0,0,0,0,0,0,0,0,0};
    while(num != 0){
        int a=num%10;
        if(seen[a]==1){return false;}
        seen[a]=1;
        num /=10;
    }
    return true;
}
void solve(){
    int num;
    cin>>num;
    while(1){
        num++;
        if(ddigits(num)){
            cout<<num<<endl;
            return;}
        
    }
    
}
int main(){
    
        solve();
    
    return 0;
}