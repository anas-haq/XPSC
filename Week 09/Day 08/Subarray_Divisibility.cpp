/*
    Author: Anas
    Date:   25-05-2024
    Time:   00:39:08
    File:   Subarray_Divisibility.cpp
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n ;
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
        sum+=v[i]%n;
        sum=(sum+n)%n;
        cnt+=mp[sum];
        mp[sum]++;
       
    }
    cout << cnt <<'\n';
    return 0;
}