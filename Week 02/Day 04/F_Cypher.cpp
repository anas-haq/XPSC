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
        vector<pair<int,string>>k(n);
        for (int i = 0; i <n; i++)
        {
            int a;
            string s;
            cin>>a>>s;
            k[i]={a,s};
        }
        for (int i = 0; i <n ; i++)
        {
            int a=k[i].first;
            string s=k[i].second;
            int cnt=0,cnt1=0;
            int ans=v[i];
            for (int j = 0; j <a; j++)
            {
                if(s[j]=='D')                
                {
                    cnt++;
                }
                else if(s[j]=='U')
                {
                    cnt1++;
                }
            }
            ans+=cnt;
            ans-=cnt1;
            if(ans>9)
            {
                cout<<ans-10<<" ";
            }
            else if(ans<0)
            {
                cout<<ans+10<<" ";
            }
            else
            {
                cout<<ans<<" ";
            }        
        }
        cout<<'\n';      
    }    
    return 0;
}