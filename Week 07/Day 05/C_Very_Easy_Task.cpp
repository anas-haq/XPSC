/*
    Author: Anas
    Date:   07-05-2024
    Time:   21:42:01
    File:   C_Very_Easy_Task.cpp
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b;
    cin >> n >> a >> b;
    auto ok = [&](long long mid)
    {
        return mid / a + mid / b >= n - 1;
    };
    long long l = 0, r = 1e18, mid, ans;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans + min(a, b) << '\n';
    return 0;
}