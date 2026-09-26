#include<iostream>
#include<cmath>
using namespace std;
 
bool ispefectsquare(int year)
{
    int i=sqrt(year);
    return i*i==year;
}
 
void linearsearch(int year)
{
    bool flag=false;
    for(int i=0;i<=year;i++)
    {
        int j=year-i;
        if((i+j)*(i+j)==year*year)
        {
            cout<<i<<" "<<j<<endl;
            flag=true;
            break;
        }
    } 
    if(!flag)
    {
        cout<<"-1"<<endl;
    }
}
 
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int year;
        cin>>year;
        if(ispefectsquare(year))
        {
            linearsearch(sqrt(year));
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    
    return 0;
}