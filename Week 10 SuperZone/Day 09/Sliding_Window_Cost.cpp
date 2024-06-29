/*
    Author: Anas
    Date:   01-06-2024
    Time:   17:23:05
    File:   Sliding_Window_Cost.cpp
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define ll long long

template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (auto &x : v)
        cin >> x;
    ll r = 0, l = 0, ans = 0, sz = 0;
    pbds<ll> p;
    for(int i=0;i<k;i++)
    {
        p.insert(v[i]);
    }
    ll old =*p.find_by_order((k+1)/2-1);
    for (int i = 0; i <k; i++)
    {
        ans+=abs(v[i]-old);
    }
    cout<<ans<<" ";
    for (int i = 0; i <n-k; i++)
    {
        p.erase(p.find_by_order(p.order_of_key(v[i])));
        p.insert(v[i+k]);
        ll m=*p.find_by_order(((k+1)/2)-1);
        ans+=abs(m-v[i+k])-abs(old-v[i]);
        if(k%2==0)
        {
            ans-=m-old;
        }
        old=m;
        cout<<ans<<" ";
    }
    

    

    return 0;
}