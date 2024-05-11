/*
    Author: Anas
    Date:   11-05-2024
    Time:   20:02:49
    File:   C_Paprika_and_Permutation.cpp
*/
#include<bits/stdc++.h>
#define ll long long
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
        set<int>s;
        for (int i =1; i <=n; i++)
        {
            s.insert(i);
        }
        vector<int>v;
        for (int i = 0; i <n; i++)
        {
            int x;
            cin>>x;
            if(s.find(x)!=s.end())
            {
                s.erase(x);
            }
            else
            {
                v.push_back(x);
            }            
        }
        sort(v.rbegin(),v.rend());
        bool flag=false;
        for (auto it:v)
        {
            auto k=s.end();
            k--;
            int val=*k;
            if(val>((it-1)/2))
            {
                flag=true;
                break;
            }
            s.erase(val); 
        }
        cout<<((flag)?"-1":to_string(v.size()))<<'\n'; 
    }
    
    return 0;
}
