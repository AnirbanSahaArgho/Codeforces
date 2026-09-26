#include <iostream>
using namespace std;
 
int main() {
    int t,i,n,a;
    cin>>t;
    while(t--)
    {  cin>>n;
       int num[3]={0};
       for(i=0;i<n;i++)
       {
           cin>>a;
           if(a==1)
           num[1]++;
           else
           num[2]++;
       }
       if(num[1]%2==0&&num[1]!=0)
       cout<<"YES
";
       else if(num[1]==0&&num[2]%2==0)
       cout<<"YES
";
       else
       cout<<"NO
";
       
    }
 
    return 0;
}
 