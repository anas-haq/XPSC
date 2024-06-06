/*
    Author: Anas
    Date:   06-06-2024
    Time:   11:26:54
    File:   C_Two_TVs.cpp
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define ll long long

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin>>n;
    // vector<ll>d(N);
    map<ll,ll>d;
    for (ll i = 1; i <=n; i++)
    {
        ll l,r;
        cin>>l>>r;
        d[l]++;
        d[r+1]--;
    }
    ll sum = 0;
    bool ok = true;
    for (auto [idx, value] : d) {
        sum += value;
        if (sum > 2) {
            ok = false;
            break;
        }
    }
    cout<<((ok)?"YES":"NO")<<'\n';
    
    


    
    return 0;
}