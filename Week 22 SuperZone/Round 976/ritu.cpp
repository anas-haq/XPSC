#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    vector<ll> v;

    ll k=t;
    while (k--)
    {
        string A, B;
        cin >> A >> B;
        ll n = A.size();
        ll m = B.size();

        if (m > n) {
            v.push_back(0);
            return;
        }

        ll cnt = 0;

        for (ll i = 0; i <= n - m; i++) {
            if (A.compare(i, m, B) == 0) {
                cnt++;
            }
        }
        v.push_back(cnt);
    }
    

    for (ll i = 0; i < t; i++) {
        cout << "Case " << i + 1 << ": " << v[i] << "\n";
    }

    return 0;
}
