#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s[5001],m[5001],p[5001];
    int p_cnt=0,m_cnt=0,s_cnt=0,n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int skill;
        cin>>skill;
        if(skill==1)p[p_cnt++]=i;
        else if(skill==2)m[m_cnt++]=i;
        else if(skill=3)s[s_cnt++]=i;
    }
    int w=p_cnt;
    w=(m_cnt<w)?m_cnt:w;
    w=(s_cnt<w)?s_cnt:w;
    cout<<w<<endl;
    for(int i=0;i<w;i++)
    {
        cout<<p[i]<<" "<<m[i]<<" "<<s[i]<<endl;
    }
    return 0;
}