#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,res[6];
    cin>>a>>b>>c;
    res[0]=a+b+c;
    res[1]=a*b*c;
    res[2]=a+b*c;
    res[3]=(a+b)*c;
    res[4]=a*b+c;
    res[5]=a*(b+c);
    sort(res,res+6);
    cout<<res[5]<<endl;
    return 0;
}