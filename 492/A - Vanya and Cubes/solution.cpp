#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
 
    int total = 0;
    int i = 0;
 
    while (true)
    {
        i++;
        total += (i * (i + 1)) / 2;
 
        if (total > n)
        {
            i--;
            break;
        }
    }
 
    cout << i << endl;
    return 0;
}