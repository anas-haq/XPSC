#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    vector<int>v(26,0);
    for(char c:s)
    {
        int val=c-'a';
        v[val]++;
        // cout<<val<<" ";
    }
    for (int i = 0; i <26; i++)
    {
        if(v[i]==0)
        {
            cout<<char(i+'a');
            return 0;
        }
    }
    cout<<"None";
    
    return 0;
}