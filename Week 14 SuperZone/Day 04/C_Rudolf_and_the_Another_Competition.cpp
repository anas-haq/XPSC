/*
    Author: Anas
    Date:   13-07-2024
    Time:   12:09:35
    File:   C_Rudolf_and_the_Another_Competition.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t=1;
    cin >> t;

    auto Anas = [&]() {
        int n, m, h;
        cin >> n >> m >> h;
 
        vector<pair<int, ll>> res(n);
 
        for (int i = 0; i < n; i++) {
            vector<int> a(m);
            for (int j = 0; j < m; j++) {
                cin >> a[j];
            }
            sort(a.begin(), a.end());
            int cur = 0, cnt = 0;
            ll penalty = 0;
            for (int j = 0; j < m; j++) {
                if (cur + a[j] <= h) {
                    cnt++;
                    cur += a[j];
                    penalty += cur;
                }
            }
            res[i] = {-cnt, penalty};
        }
 
        cout << count_if(res.begin(), res.end(), [&](auto x) { return x < res[0]; }) + 1 << '\n';
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
