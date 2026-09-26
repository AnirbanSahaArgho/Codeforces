#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin >> t;
    while(t--){
        int n, k, b=0, res; cin >> n >> k;
        vector<int> arr(n);
        for(int i=0; i<n; i++) cin >> arr[i];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(j!=i){
                    if(abs(arr[j]-arr[i])!=0 && (abs(arr[j]-arr[i])%k!=0)){
                        res = i+1;
                        b=1;
                    }else if(abs(arr[j]-arr[i])%k==0){
                        b=0;
                        break;
                    }
                }
            }
            if(b==1) break;
        }
        if(n==1){
            cout << "YES" << "
" << "1" << endl;
        }
        else if(b==1){
            cout << "YES" << endl;
            cout << res << endl;
        }else{
            cout << "NO" << endl;
        }
 
    }
 
    return 0;
}