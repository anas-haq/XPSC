/*
    Author: Anas
    Date:   19-05-2024
    Time:   19:18:26
    File:   Playlist.cpp
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> v(n), k;
    for (ll &x : v)
    {
        cin >> x;
    }
    set<int>s;
    int idx=0,ans=0;
    for(int i=0;i<n;i++)
    {
        while (s.count(v[i]))
        {
            s.erase(v[idx]);
            idx++;
        }
        s.insert(v[i]);
        ans=max(ans,(int)s.size());        
    }
    cout<<ans;

    return 0;
}