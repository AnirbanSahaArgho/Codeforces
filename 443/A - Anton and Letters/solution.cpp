#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    getline(cin,s);
    for(int i=0;i< s.size();i++)
    {
        if(s[i]!='{' && s[i]!=',' && s[i]!='}' && !isspace(s[i]))
            {
                s1+=s[i];
            }
    }
    set<char> p;
    for(int i=0;i< s1.size();i++)
    {
        p.insert(s1[i]);
    }
    int b=p.size();
    cout<<b<<endl;
    return 0;
}