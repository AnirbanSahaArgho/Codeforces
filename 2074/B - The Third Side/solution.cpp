#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        while(n!=1)
        {
            int ele=a[n-1]+a[n-2]-1;
            a[n-2]=ele;
            n--;
        }
        cout<<a[0]<<endl;
    }
    return 0;
}