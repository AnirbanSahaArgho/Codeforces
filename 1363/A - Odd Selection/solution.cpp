                       /*  JOY SHREE KRISHNO   */
 
 
#include <bits/stdc++.h>
using namespace std;
 
bool canSelectOddSum(int n, int x, vector<int>& a) {
    int oddCount = 0, evenCount = 0;
    for (int num : a) {
        if (num % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
 
    for (int i = 1; i <= x; i += 2) {
        if (i <= oddCount && x - i <= evenCount) {
            return true;
        }
    }
 
    return false;
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, x;
        cin >> n >> x;
 
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        if (canSelectOddSum(n, x, a)) {
            cout << "Yes
";
        } else {
            cout << "No
";
        }
    }
 
    return 0;
}