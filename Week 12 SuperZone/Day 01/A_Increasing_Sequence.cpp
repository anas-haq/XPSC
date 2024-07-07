/*
    Author: Anas
    Date:   07-07-2024
    Time:   11:26:11
    File:   A_Increasing_Sequence.cpp
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
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans=1;
        for (ll i =0; i <n; i++)
        {
            ll b;
            cin>>b;
            if(b==ans)
            {
                ans++;
            }
            ans++;
        }
        cout<<ans-1<<'\n';
        
    }
    return 0;
}