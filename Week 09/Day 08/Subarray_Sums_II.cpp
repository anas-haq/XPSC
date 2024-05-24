/*
    Author: Anas
    Date:   24-05-2024
    Time:   23:53:37
    File:   Subarray_Sums_II.cpp
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll cnt=0,sum=0;
    unordered_map<ll, int>mp;
    mp[0]++;
    for (int i = 0; i < n; i++)
    {
        sum+=v[i];
        cnt+=mp[sum-x];
        mp[sum]++;
    }
    cout << cnt <<'\n';
    return 0;
}
