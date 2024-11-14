/*
    Author: Anas
    Date:   24-09-2024
    Time:   20:27:30
    File:   A_Subset_Mex.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;

    auto Anas = [&]()
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        vector<ll> freq(101, 0);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            freq[v[i]]++;
        }
        ll mexA = 0, mexB = 0;
        for (ll i = 0; i <= 100; i++)
        {
            if (freq[i] > 0)
            {
                mexA++;
                freq[i]--;
            }
            else
            {
                break;
            }
        }
        for (ll i = 0; i <= 100; i++)
        {
            if (freq[i] > 0)
            {
                mexB++;
                freq[i]--;
            }
            else
            {
                break;
            }
        }
        cout << (mexA + mexB) << "\n";
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
