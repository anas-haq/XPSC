#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,b,c;
    cin>>a>>b>>c;
    bool flag=false;
    for (ll i = 0; i <=c; i++)
    {
        for (ll j = 0; j <=c; j++)
        {
            if((a*j + i*b) == c)
            {
                flag=true;
                break;
            }
        }
        
    }
    if(flag) cout<<"Yes";
    else cout<<"No";
    
    return 0;
}