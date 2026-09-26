#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b,i;
        cin>>a>>b;
        for(i=a;i<=pow(10,8);i++)
        {
            if(i%a==0 && i%b==0)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}