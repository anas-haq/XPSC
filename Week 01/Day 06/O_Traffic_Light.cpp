#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char a;
        cin >> n >> a;
        string b;
        cin >> b;
        for(int i=0;i<n;i++)
        {
            if(b[i]=='g')
            {
                break;
            }
            else
            {
                b.push_back(b[i]);
            }
        }
        b.push_back('g');
        int cnt=0;
        int ans=0;
        bool flag=true;
        for (int i = 0; i <b.size() ; i++)
        {
            if(b[i]==a && flag==true)
            {
                flag=false;
            }
            if(b[i]=='g')
            {
                ans=max(cnt,ans);
                cnt=0;
                flag=true;
            }
            if(flag==false)
            {
                cnt++;
            }
            
        }
        cout<<ans<<endl;       
        
    }

    return 0;
}
