#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,s;
    cin>>n>>s;
    vector<ll>v(n);
    for (ll i = 0; i <n; i++)
    {
        cin>>v[i];
    }
    ll l=0,r=0,ans=0,sum=0;
    while (r<n)
    {
        sum+=v[r];
        if(sum<=s)
        {
            ans=max(ans,r-l+1);
            r++;
        }
        else
        {
            sum-=v[l];
            l++;
            r++;
        }

    }
    cout<<ans;
    
    
    return 0;
}