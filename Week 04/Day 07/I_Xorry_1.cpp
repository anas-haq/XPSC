#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a = 0, b = 0;
        for (int i = 31; i >= 0; i--)
        {
            if (n & (1 << i))
            {
                a |= (1 << i);
                break;
            }
        }
        b = n ^ a;
        cout << min(a, b) << " " << max(a, b) << endl;
    }
    return 0;
}