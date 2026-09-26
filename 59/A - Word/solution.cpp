#include<iostream>
#include<string>
using namespace std;
int main()
{
    int u=0,l=0,i;
    string s;
    cin >> s;
    for(i=0;i<s.size();i++)
    {
        if(isupper(s[i]))
        {
            u++;
        }
        else
        {
            l++;
        }
    }
    if(u<=l)
    {
        for(i=0;i<s.size();i++)
        {
            s[i]=tolower(s[i]);
        }
        cout << s << endl;
    }
    else
    {
        for(i=0;i<s.size();i++)
        {
            s[i]=toupper(s[i]);
        }
        cout << s << endl;
    }
    return 0;
}