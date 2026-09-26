#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int a;
    cin>>a;
    if(a<0)
    {
        if(a>=-10 || (a>-100 && a%10==0)) cout<<"0"<<endl;
        else{
            int x=abs(a%10),y=(abs(a%100))/10,m=a/10,n=a/100;
            if(x<y) {
                if(a>-100) cout<<"-"<<x<<endl;
                else cout<<n<<x<<endl;
            }
            else cout<<m<<endl;
        }
    }
    else cout<<a<<endl;
    return 0;
}