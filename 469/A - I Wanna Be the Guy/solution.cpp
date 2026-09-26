#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,s,t;
    cin>>n;
    cin>>s;
    int arr1[s];
    for(int i=0;i<s;i++)
    {
        cin>>arr1[i];
    }
    cin>>t;
    int arr2[t];
    for(int i=0;i<t;i++)
    {
        cin>>arr2[i];
    }
 
    set<int>a;
    for(int i=0;i<s;i++)
    {
        a.insert(arr1[i]);
    }
    for(int i=0;i<t;i++)
    {
        a.insert(arr2[i]);
    }
 
    int c=a.size();
    if(c==n)
    {
        cout<<"I become the guy."<<endl;
    }
    else
        cout<<"Oh, my keyboard!"<<endl;
    return 0;
}