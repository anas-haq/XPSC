/*
    Author: Anas
    Date:   02-06-2024
    Time:   19:37:06
    File:   H_1_Maximum_Crossings_Easy_Version_2.cpp
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
    
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<ll>v(n);
        for(auto &x:v)cin>>x;
        ll ans=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(v[i]>=v[j])
                {
                    ans++;
                }
            }
        }
        cout<<ans<<'\n';
    }
    
    return 0;
}