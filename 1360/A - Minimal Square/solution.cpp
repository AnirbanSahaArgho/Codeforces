#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b;
        if(a>b)
        {
            if(a<=2*b)
                c=2*b;
            else
                c=a;
        }
        else
        {
            if(b<=2*a)
                c=2*a;
            else
                c=b;
        }
        cout<<c*c<<endl;
    }
    return 0;
}