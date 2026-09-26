#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>teams;
    string team;
    int n;
    cin>>n;
    vector<int>goals(n);
    while(n--)
    {
        cin>>team;
        int flag = false;
        for(int i=0;i<teams.size();i++)
        {
            if(teams[i]==team){
                goals[i]++;
                flag = true;
                break;
            }
        }
        if(!flag) {
            teams.push_back(team);
            goals[teams.size()-1]++;
        }
    }
    int i=0,j=0;
    for(;i<goals.size();i++)
    {
        if(goals[i]>goals[j]) j=i;
    }
    cout<<teams[j]<<endl;
    return 0;
}