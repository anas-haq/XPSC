#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int ans=0;
    if(n==m)
    {
        ans=n+m;
    }
    else
    {
        if(n>m)
        {
            ans=n+n-1;
        }
        else
        {
            ans=m+m-1;
        }
    }
    cout<<ans;
    return 0;
}