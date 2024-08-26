/*
    Author: Anas
    Date:   26-08-2024
    Time:   17:02:27
    File:   A_K_divisible_Sum.cpp
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
        ll n, k;
        cin >> n >> k;
        if (n > k)
        {
            if (n % k == 0)
                cout << "1\n";
            else
                cout << "2\n";
        }
        else
        {
            if (k %n == 0)
                cout << k / n << "\n";
            else
                cout << k/n + 1 << "\n";
        }
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
