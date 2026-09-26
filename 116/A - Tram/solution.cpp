#include<iostream>
using namespace std;
int main()
{
    int n,exit,enter,cap1,cap2=0,cap3=0;
    cin>>n;
    while(n--)
    {
        cin>>exit>>enter;
        cap1=enter-exit;
        cap2=cap1+cap2;
        if(cap2>cap3)
        {
            cap3=cap2;
        }
    }
    cout<<cap3<<endl;
    return 0;
}