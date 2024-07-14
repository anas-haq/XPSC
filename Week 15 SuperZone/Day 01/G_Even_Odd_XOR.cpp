/*
    Author: Anas
    Date:   13-07-2024
    Time:   20:31:57
    File:   G_Even_Odd_XOR.cpp
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
 
        if (n % 4 == 0) {
            for (int i = 0; i < n; i++) {
                cout << i << " \n"[i == n - 1];
            }
        } else if (n % 4 == 1) {
            for (int i = 0; i < n; i++) {
                cout << i + (i != 0) << " \n"[i == n - 1];
            }
        } else {
            for (int i = n % 4 == 2; n > 3; i++, n--) {
                cout << i << ' ';
            }
            cout << (1 << 28) << ' ' << (1 << 29) << ' ' << (3 << 28) << '\n';
        }
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
