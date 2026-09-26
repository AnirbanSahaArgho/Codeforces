#include<iostream>
using namespace std;
int main()
{
    int t,n,x,y,count=1;
    cin>>t;
    for(x=0;x<t;x++)
    {
        cin>>n;
        if(x>0)
        {
            if(n!=y)
            {
                count++;
            }
        }
        y=n;
    }
    cout<<count<<endl;
    return 0;
}