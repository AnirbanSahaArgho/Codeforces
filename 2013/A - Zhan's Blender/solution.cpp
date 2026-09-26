#include<iostream>
using namespace std;
int main()
{
    int t,n,x,c,a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>x>>c;
        if(x<c)
        {
            if(n%x==0)
            {
                a=n/x;
            }
            else
            {
                a=(n/x)+1;
            }
        }
        else
        {
            if(n%c==0)
            {
                a=n/c;
            }
            else
            {
                a=(n/c)+1;
            }
        }
        cout<<a<<endl;
    }
    return 0;
}