#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for (int i = 0; i <n; i++)
        {
            cin>>v[i];
        }
        int cnt=INT_MIN;
        for (int i = 0; i <n; i++)
        {
            int a=v[i]-(i+1);
            cnt=max(cnt,a);
        }
        cout<<cnt<<'\n';
    }
    return 0;
}
