#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,m,diff=0;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);
    int min_diff=a[n-1]-a[0];
    for(int i=0;i<m-n+1;i++)
    {
        diff=a[i+n-1]-a[i];
        if(diff<min_diff)
        {
            min_diff=diff;
        }
    }
    cout<<min_diff<<endl;
    return 0;
}