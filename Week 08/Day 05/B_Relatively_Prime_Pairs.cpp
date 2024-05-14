/*
    Author: Anas
    Date:   14-05-2024
    Time:   20:33:58
    File:   B_Relatively_Prime_Pairs.cpp
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll l,r;
    cin>>l>>r;
    
   ll ans=(r-l+1)/2;
   int cnt=0;
    if(r-l+1 < 2)
    {
        cout << "NO";
        return 0;
    }
    
    cout << "YES" << '\n';
    for (ll i = l; i <=r; i+=2)
    {
        if(cnt<=ans)
        {
             cout << i << " " << i+1 << "\n";
        }
        else
        {
            break;
        }
        
       
    }
    
    return 0;
}
