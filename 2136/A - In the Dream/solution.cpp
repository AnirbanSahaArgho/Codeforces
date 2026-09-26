#include<bits/stdc++.h>
using namespace std;
 
bool fsthf(int a,int b)
{
    return max(a,b) <= 2*min(a,b)+2;
}
 
bool scnhf(int a,int b,int c,int d)
{
    return max(c-a,d-b) <= 2*min(c-a,d-b)+2;
}
 
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
    
        if(fsthf(a,b) && scnhf(a,b,c,d)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
 
    }
    return 0;
}