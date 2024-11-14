#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    // Lambda function to handle each test case
    auto solve = [&]()
    {
        ll n, q;
        cin >> n >> q;
        vector<ll> v(n), queries(q);

        // Input coordinates
        for (auto &x : v)
            cin >> x;

        // Input queries
        for (auto &k : queries)
            cin >> k;

        // Frequency map to store how many points are covered by exactly `k` segments
        unordered_map<ll, ll> freq;

        // Iterate over all points
        for (ll i = 1; i <= n; i++)
        {
            // This is the number of segments covering point `i`
            ll k = (i - 1) * (n - i + 1) + (n - i);
            freq[k]++; // Increment frequency for this segment count

            if (i < n)
            {
                // Calculate the gap between consecutive points
                ll gap = v[i] - v[i - 1] - 1;
                if (gap > 0)
                {
                    ll p = i * (n - i); // Calculate the number of segments for points in between
                    freq[p] += gap;     // Add these points to the frequency map
                }
            }
        }

        // Output the result for each query
        for (auto k : queries)
        {
            cout << freq[k] << " ";
        }
        cout << "\n";
    };

    // Handle multiple test cases
    while (t--)
    {
        solve();
    }

    return 0;
}
