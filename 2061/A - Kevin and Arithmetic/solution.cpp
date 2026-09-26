#include<bits/stdc++.h>
using namespace std;
#define ll long long
int newsum(int sum)
{
    while(sum%2==0)
    {
        sum/=2;
    }
    return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x=0,y=0,point=0,sum=0;
        cin>>n;
        ll a;
        vector<ll>even,odd;
        for(int i=1;i<=n;i++)
        {
            cin>>a;
            if(a%2==0) even.push_back(a);
            else odd.push_back(a);
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        even.insert(even.end(),odd.begin(),odd.end());
        for(int i=0;i<even.size();i++)
        {
            sum+=even[i];
            if(sum%2==0)
            {
                point++;
                sum=newsum(sum);
            }
        }
        cout<<point<<endl;
    }
    return 0;
}