#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int x;
    cin>>s;
    for (int i = 1; i < s.size(); i++)
    {
        if(s[0]>='A' && s[0]<='Z' && s[i]>='A' && s[i]<='Z' || s[0]>='a' && s[0]<='z' && s[i]>='A' && s[i]<='Z') x=0;
        else {
            x=1;
            break;
        }
    }
    if(x==0){
        for (int i = 0; i < s.size(); i++)
        {
             if(i==0)
             {
                if(s[i]>='a') printf("%c",s[i]-32);
                else printf("%c",s[i]+32);
             }
             else
             {
                if(s[i]<='Z') printf("%c",s[i]+32);
                else printf("%c",s[i]);
             }
        }
        cout<<endl;
    }
    else
    {
        cout<<s<<endl;        
    }
    return 0;
}