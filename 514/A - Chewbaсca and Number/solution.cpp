#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long int a;
    vector<int>digits;
 
    cin>>a;
    string s=to_string(a);
    for(char c:s)
    {
        digits.push_back(c - '0');
    }
 
    (9-digits[0]==0 || 9-digits[0]>digits[0]) ? cout<<digits[0] : cout<<9-digits[0];
    for(int i=1;i<digits.size();i++)
    {
        (9-digits[i]<digits[i]) ? cout<<9-digits[i] : cout<<digits[i];
    }
    return 0;
}