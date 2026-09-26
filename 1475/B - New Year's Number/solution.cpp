#include <iostream>
using namespace std;
 
bool canRepresent(int n) {
    int max_k = n / 2020;
    for (int k = 0; k <= max_k; k++) {
        int b = n - 2020 * k;
        if (b >= 0 && b <= k) {
            return true;
        }
    }
    return false;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (canRepresent(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}