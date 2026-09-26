#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,bac=0;
    cin>>x;
    while (x)
    {
        if(x&1) bac++;
        x>>=1;
    }
    cout<<bac<<endl;
    return 0;
}