#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,s;
    cin >> n >> s;

    int arr[n];
    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }

    int l = 0;
    int r = 0;
    ll sum = 0;
    ll ans = 0;


    while (r < n)
    {
        sum += arr[r];
        while(sum >= s && l <= r)
        {
            ans += n-r;
            // cout<<sum<<" ";
            sum-= arr[l];
            l++;
        }

        r++;
    }

    cout << ans << "\n";
    return 0;
}