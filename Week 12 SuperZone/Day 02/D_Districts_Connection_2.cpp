/*
    Author: Anas
    Date:   11-07-2024
    Time:   11:57:49
    File:   D_Districts_Connection.cpp
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
        int n;
        cin >> n;
 
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        auto [it1, it2] = minmax_element(a.begin(), a.end());
        
        if (*it1 == *it2) {
            cout << "NO\n";
            return;
        }
 
        cout << "YES\n";
 
        int p1 = it1 - a.begin(), p2 = it2 - a.begin();
 
        for (int i = 0; i < n; i++) {
            if (a[i] != *it1) {
                cout << i + 1 << ' ' << p1 + 1 << '\n';
            } else if (i != p1) {
                cout << i + 1 << ' ' << p2 + 1 << '\n';
            }
        }
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
