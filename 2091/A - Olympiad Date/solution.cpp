#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        int cnt0 = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt5 = 0;
        int ans = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] == 0) cnt0++;
            else if(a[i] == 1) cnt1++;
            else if(a[i] == 2) cnt2++;
            else if(a[i] == 3) cnt3++;
            else if(a[i] == 5) cnt5++;
 
            if(cnt0 >= 3 && cnt1 >= 1 && cnt2 >= 2 && cnt3 >= 1 && cnt5 >= 1) {
                ans = i + 1;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}