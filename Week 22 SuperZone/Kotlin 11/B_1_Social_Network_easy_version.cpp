/*
    Author: Anas
    Date:   24-09-2024
    Time:   00:20:04
    File:   B_1_Social_Network_easy_version.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t=1;
    // cin >> t;

    auto Anas = [&]() {
        ll n, k;
        cin >> n >> k;
        set<int> s;
        deque<int> dq;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (s.find(x) != s.end())
                continue;
            if (dq.size() >= k)
            {
                // cout<<dq.back()<<" ";
                s.erase(dq.back());
                dq.pop_back();
            }
            s.insert(x);
            dq.push_front(x);
        }
        cout << dq.size() << '\n';
        for (int x : dq)
        {
            cout << x << ' ';
        }
        cout << '\n';
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
