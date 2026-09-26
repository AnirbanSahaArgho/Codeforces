#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,a,maximum=0,minimum=101,maxi,mini;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a>maximum)
        {
            maximum=a;
            maxi=i;
        }
        if(a<=minimum)
        {
            minimum=a;
            mini=i;
        }
    }
    if(maxi>mini)
    {
        mini++;
    }
    cout<<maxi+(n-1)-mini<<endl;
    return 0;
}