#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int>v(26,0);
        for(int i=0;i<n;i++)
        {
            int val=s[i]-'a';
            v[val]++;
        }
        int cnt=0;
        for (int i = 0; i <26; i++)
        {
            if (v[i]%2==1)
            {
                cnt++;
            }            
        }
        if (cnt>k+1)
        {
            cout<<"NO"<<'\n';
        }
        else
        {
            cout<<"YES"<<'\n';
        }
        

        
    }
    return 0;
}
