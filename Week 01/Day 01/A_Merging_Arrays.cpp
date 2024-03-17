#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    vector<ll>a(n);
    vector<ll>c(n+m);
    for (ll i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    vector<ll>b(m);
    for (ll i = 0; i <m; i++)
    {
        cin>>b[i];
        
    }
    for (ll i = 0; i <n; i++)
    {
        c[i]=a[i];
    }
    ll k=n;
    for (ll i = 0; i <m; i++)
    {
        c[k]=b[i];
        k++;
    }
    sort(c.begin(),c.end());
    for (ll i = 0; i <c.size(); i++)
    {
        cout<<c[i]<<" ";
    }
    
    return 0;
}
