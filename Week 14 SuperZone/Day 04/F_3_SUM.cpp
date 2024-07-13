/*
    Author: Anas
    Date:   13-07-2024
    Time:   13:40:43
    File:   F_3_SUM.cpp
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
 
        vector<int> v, cnt(10);
 
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            a %= 10;
            if (cnt[a] < 3) {
                cnt[a]++;
                v.push_back(a);
            }
        }
 
        n = v.size();
        // for(auto val:v)
        // {
        //     cout<<val<<" ";
        // }
        
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    if ((v[i] + v[j] + v[k]) % 10 == 3) {
                        cout << "YES\n";
                        return;
                    }
                }
            }
        }
 
        cout << "NO\n";
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
