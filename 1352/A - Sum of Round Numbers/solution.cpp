#include<bits/stdc++.h>
using namespace std;
void solve(){
    string str;
    cin>>str;
    int countk=0;
    for(int i=0; i<str.size(); i++){
        if(str[i] != '0'){
            countk++;
        }
    }
    cout<<countk<<endl;
    int s=str.size()-1;
    for(int i=0; i<str.size(); i++){
        if(str[i] != '0'){
            cout<<str[i];
            for(int j=0; j<s-i; j++){
                cout<<"0";
            }
            cout<<" ";
 
        }
    }
    cout<<endl;
}
int main(){  
    int t;
    cin>>t;
    while(t--){         
        solve();
    }  
    return 0;
}