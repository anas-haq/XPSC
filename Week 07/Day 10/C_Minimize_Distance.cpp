/*
    Author: Anas
    Date:   12-05-2024
    Time:   21:33:48
    File:   C_Minimize_Distance.cpp
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v, w;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x < 0)
            {
                x = x * (-1);
                w.push_back(x);
            }
            else if (x > 0)
            {
                v.push_back(x);
            }
        }
        sort(v.begin(), v.end());
        sort(w.begin(), w.end());
        ll ans = 0, a = 0, b = 0;
        if (v.empty() == false)
        {
            if (v.size() < k)
            {
                a = v[v.size() - 1];
                ans += a;
            }
            else
            {
                a = v[v.size() - 1];
                for (int i = 0; i < v.size(); i++)
                {
                    if (i == v.size() - 1)
                    {
                        ans += v[i];
                    }
                    else if ((v.size() - i - 1) % k == 0)
                    {
                        ans += v[i] * 2;
                    }
                }
            }
        }
        if (w.empty() == false)
        {
            if (w.size() < k)
            {
                b = w[w.size() - 1];
                ans += b;
            }
            else
            {
                b = w[w.size() - 1];
                for (int i = 0; i < w.size(); i++)
                {
                    if (i == w.size() - 1)
                    {
                        ans += w[i];
                    }
                    else if ((w.size() - i - 1) % k == 0)
                    {
                        ans += w[i] * 2;
                    }
                }
            }
        }
        ans += min(a, b);
        cout << ans << "\n";
    }

    return 0;
}