#include<iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x=0;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==s[i-1])
            {
                if(x==0)
                {
                    for(char b = 'a'; b <= 'z'; b++) {
                        if(b != s[i]) {
                            cout << b;
                            x=1;
                            break;
                        }
                    }
                }
                cout<<s[i];
            }
            else{
                cout<<s[i];
            }
        }
        if(x==0)
        {
            for(char b='a';b<='z';b++)
            {
                if(b!=s[s.size()-1])
                {
                    cout<<b;
                    break;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}