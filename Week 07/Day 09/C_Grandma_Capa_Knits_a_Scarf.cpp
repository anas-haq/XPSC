/*
    Author: Anas
    Date:   11-05-2024
    Time:   22:36:38
    File:   C_Grandma_Capa_Knits_a_Scarf.cpp
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
        string s;
        cin>>s;
        set<char>sa;
        for (int i = 0; i < n; i++)
        {
            sa.insert(s[i]);
        }
        vector<int>ans(26,LONG_MAX);
        for (auto a:sa)
        {
            int c=0;
            int l=0,r=n-1;
            while (l<r)
            {
                if(s[l]==s[r])
                {
                    l++; r--;
                }
                else
                {
                    if(s[l]==a)
                    {
                        c++;
                        l++;
                        // r--;
                    }
                    else if(s[r]==a)
                    {
                        c++;
                        // l++;
                        r--;
                    }
                    else
                    {
                        c=-1;
                        break;
                    }
                    
                }
                
            }
            if(c!=-1)
            {
                ans[a-'a']=c;
            }
            
        }
        sort(ans.begin(),ans.end());
        if(ans[0]==LONG_MAX)
        {
            cout<<"-1"<<'\n';
        }
        else
        {
            cout<<ans[0]<<'\n';
        }
        
        
    }
    
    return 0;
}