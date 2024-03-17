#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, t;
    cin >> a >> b >> t;
    int ans = 0;
    int k = a;
    double o = t + 0.5;
    while (k <= o)
    {
        ans += b;
        k+=a;
    }
    cout<<ans;

    return 0;
}