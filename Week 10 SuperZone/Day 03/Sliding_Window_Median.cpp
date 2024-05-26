/*
    Author: Anas
    Date:   26-05-2024
    Time:   20:10:00
    File:   Sliding_Window_Median.cpp
*/
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define ll long long

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(auto &x:v)cin>>x;
    ll l=0,r=0;
    pbds<pair<ll,ll>>p;
    while (r<n)
    {
        p.insert({v[r],r});
        if(r-l+1==k)
        {
            ll i=k/2;
            if(k%2==0)i--;
            auto it=p.find_by_order(i);
            cout<<it->first<<" ";
            p.erase({v[l],l});
            l++;
        }
        r++;
    }
    
    return 0;
}