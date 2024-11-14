/*
    Author: Anas
    Date:   22-09-2024
    Time:   10:46:29
    File:   A_My_First_Sorting_Problem.cpp
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
        ll a,b;
        cin>>a>>b;
        ll c=min(a,b);
        ll d=max(a,b);
        cout<<c<<" "<<d<<"\n";
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
