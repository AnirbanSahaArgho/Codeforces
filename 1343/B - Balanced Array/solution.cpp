#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int t;
        cin>>t;
        if((t/2)%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            int s[t],i,x=0,y=0;
            for(i=0;i<(t/2)-1;i++)
            {
                s[i]=2*i+2;
                x+=s[i];
                s[(t/2)+i]=2*i+1;
                y+=s[(t/2)+i];
            }
            s[i]=2*i+2;x+=s[i];
            s[(t/2)+i]=x-y;
            for(i=0;i<t;i++)
            {
                cout<<s[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}