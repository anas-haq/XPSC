#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int t=n,cnt=0;
    while (t!=0)
    {
        t=t/10;
        cnt++;      
    }
    if(cnt==1)
    {
        cout<<"000"<<n;
    }
    else if(cnt==2)
    {
        cout<<"00"<<n;
    }
    else if(cnt==3)
    {
        cout<<"0"<<n;
    }
    else if(cnt==0)
    {
        cout<<"0000";
    }
    else
    {
        cout<<n;
    }
    
    return 0;
}