#include<iostream>
using namespace std;
int main()
{
    int n,steps=0;
    cin >> n;
    while(n>=1)
    {
        n-=5;
        steps++;
    }
    cout << steps << endl;
    return 0;
}