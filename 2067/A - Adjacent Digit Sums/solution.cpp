#include <iostream>
#include <string>
using namespace std;
 
bool isPossible(int x, int y) {
    if (y > x + 1) {
        return false;
    }
    if (y == x + 1) {
        return true;
    }
    if (y < x) {
        if ((x - y + 1) % 9 == 0) {
            return true;
        }
    }
    if (y == x) {
        return false;
    }
    return false;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if (isPossible(x, y)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}