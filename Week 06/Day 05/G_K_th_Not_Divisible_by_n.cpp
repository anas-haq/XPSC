#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        ll l=1,r=INT_MAX,ans=0;
        while (l<=r)
        {
            ll mid=(l+r)/2;
            ll x=mid-mid/n;
            if(x>k)
            {
                r=mid-1;
            }
            else if (x<k)
            {
                l=mid+1;
            }
            else
            {
                ans=mid;
                r=mid-1;
            }          
            
        }
        cout<<ans<<'\n';
        
    }
    
    return 0;
}