/*
    Author: Anas
    Date:   22-05-2024
    Time:   17:45:12
    File:   Sum_of_Three_Values.cpp
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, x;
    cin >> n >> x;
    vector<pair<ll, ll>> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i + 1;
    }
    sort(v.begin(), v.end());

    // for(auto it:v)
    // {
    //     cout<<it.first<<" "<<it.second<<"\n";
    // }

    for (ll i = 0; i < n; ++i)
    {
        ll target = x - v[i].first;
        ll l = i + 1;
        ll r = n - 1;

        while (l < r)
        {
            ll sum = v[l].first + v[r].first;
            if (sum == target)
            {
                cout << v[i].second << " " << v[l].second << " " << v[r].second << "\n";
                return 0;
            }
            else if (sum < target)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}