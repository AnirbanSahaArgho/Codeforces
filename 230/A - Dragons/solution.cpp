#include<bits/stdc++.h>
using namespace std;
 
typedef struct 
{
    int x;
    int y;
}Dragons;
 
int compare(const void *a,const void *b)
{
    Dragons *dragonA=(Dragons*)a;
    Dragons *dragonB=(Dragons*)b;
    return ((dragonA->x)-(dragonB->x));
}
 
int main()
{
    int s,n,a=0;
    cin>>s>>n;
    Dragons value[n];
    for(int i=0;i<n;i++)
    {
        cin>>value[i].x;
        cin>>value[i].y;
    }
    qsort(value,n,sizeof(Dragons),compare);
    for(int i=0;i<n;i++)
    {
        if(s>value[i].x)
        {
            s+=value[i].y;
            a++;
        }
        else{
            break;
        }
    }
    if(a==n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}