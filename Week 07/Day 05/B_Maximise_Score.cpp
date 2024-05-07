/*
    Author: Anas
    Date:   07-05-2024
    Time:   21:58:03
    File:   B_Maximise_Score.cpp
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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int &x : v)
        {
            cin >> x;
        }
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                ans = min(ans, abs(v[i] - v[i + 1]));
            }
            else if (i == n - 1)
            {
                ans = min(ans, abs(v[i] - v[i - 1]));
            }
            else
            {
                ans = min(ans, max(abs(v[i] - v[i + 1]), abs(v[i] - v[i - 1])));
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
