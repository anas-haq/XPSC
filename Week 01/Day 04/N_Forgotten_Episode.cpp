#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int missing = 1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == missing)
        {
            // cout<<missing<<" ";
            missing++;
        }
    }
    cout << missing;
    return 0;
}
