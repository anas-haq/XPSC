/*
    Author: Anas
    Date:   04-06-2024
    Time:   18:37:35
    File:   E_Vlad_and_an_Odd_Ordering.cpp
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
    
    // cout<<log2(7);
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        for (ll i =1; i <=(log2(n)+1); i++)
        {
            ll x=pow(2,i);
            ll y=((n+(x/2))/x);
            if(k<=y)
            {
                if(k==1)
                {
                    cout<<x/2<<'\n';
                    break;
                }
                else
                {
                    ll ans=(x/2)+((k-1)*x);
                    cout<<ans<<"\n";
                    break;
                }
                
            }
            else
            {
                k-=y;
            }
            

        }
        
    }
    
    return 0;
}