#include<bits/stdc++.h>
using namespace std;
int count(int x[],int n,int m)
{
    int l=0,r=n-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(x[mid]<=m) l=mid+1;
        else r=mid-1;
    }
    return l;
}
int main()
{
    int n,q;
    cin>>n;
    int x[n];
    for (int i = 0; i < n; i++)
    {
        cin>>x[i];
    }
    sort(x,x+n);
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int m;
        cin>>m;
        int number_of_shop=count(x,n,m);
        cout<<number_of_shop<<endl;
    }
    return 0;
}