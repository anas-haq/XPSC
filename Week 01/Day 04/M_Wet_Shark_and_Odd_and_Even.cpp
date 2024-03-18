#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll sum = 0;
    ll Odd = INT_MAX;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
        if (v[i] % 2 != 0 && v[i] < Odd)
        {
            Odd = v[i];
        }
    }
    if (sum % 2 != 0)
    {
        sum -= Odd;
    }
    cout << sum;
    return 0;
}
