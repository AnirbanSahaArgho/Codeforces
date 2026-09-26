#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int cont=0;
        while(n!=0)
        {
            if(n>=4)
            {
                cont++;
            }
            n/=4;
        }
        if(cont==0)
        {
            cout<<1<<'
';
        }
        else
        {
            int ans=pow(2,cont);
            cout<<ans<<endl;
        }
    }
    return 0;
}