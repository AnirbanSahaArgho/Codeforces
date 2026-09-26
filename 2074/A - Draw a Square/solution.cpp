#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r,d,u,s1,s2,s3,s4,s5,s6;
        cin>>l>>r>>d>>u;
        s1=r*r+u*u;
        s2=r*r+d*d;
        s3=l*l+u*u;
        s4=l*l+d*d;
        s5=(u+d)*(u+d);
        s6=(r+l)*(r+l);
 
        if(s1==s2 && s2==s3 && s3==s4 && s5==s6) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}