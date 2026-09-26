#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[4],b[4],x,y,z=0;
        for(int i=0;i<4;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        x=(a[0]<a[1])?a[1]:a[0];
        y=(a[2]<a[3])?a[3]:a[2];
        sort(b,b+4);
        for(int i=0;i<3;i++)
        {
            if(b[i]==x && b[i+1]==y || b[i]==y && b[i+1]==x)
            {
                z=1;
                break;
            }
        }
        if(z==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}