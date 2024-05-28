/*
    Author: Anas
    Date:   28-05-2024
    Time:   16:58:18
    File:   R_Chef_and_Prime_Divisors.cpp
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
    while (t--)
    {
        ll a,b;
        cin>>a>>b;
        ll ans=__gcd(a,b);
        while (ans!=1)
        {
           b/= ans;
           ans=__gcd(a,b);
        }
        cout<<((b==1)?"Yes":"No")<<'\n';        
    }
    
    return 0;
}
