#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,s=0,p=0;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x>=k)
            {
                s+=x;
            }
            if(s>0 && x==0)
            {
                s--;
                p++;
            }
        }
        cout<<p<<endl;
    }
    return 0;
}