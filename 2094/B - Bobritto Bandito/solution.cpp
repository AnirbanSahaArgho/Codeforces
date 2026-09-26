#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, m, l, r, s=0;
        cin >> n >> m >> l >> r;
        int l_prime = 0-m;
        if(l_prime<l)
        {
            s=l-l_prime;
            l_prime=l;
        }
        int r_prime = s;
 
        cout << l_prime << " " << r_prime << endl;
    }
 
    return 0;
}