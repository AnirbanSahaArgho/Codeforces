#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,i,x=0,y=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            x++;
        else
            y++;
    }
    if(x>y)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]%2!=0){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}