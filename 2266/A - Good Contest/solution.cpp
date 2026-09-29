#include<bits/stdc++.h>
using namespace std;
 
int weeker_stud(int n, vector<int>&arr){
    int minimum = *min_element(arr.begin(), arr.end());
    return n - minimum;
}
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>arr(3);
        for(int i = 0; i < 3; i++){
            cin >> arr[i];
        }
        cout << weeker_stud(n, arr) << endl;
    }
    return 0;
}