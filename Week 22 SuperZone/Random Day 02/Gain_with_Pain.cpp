/*
    Author: Anas
    Date:   26-09-2024
    Time:   16:37:39
    File:   Gain_with_Pain.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t=1;
    cin >> t;

    auto Anas = [&]() {
        ll n;
        cin>>n;
        bool ok=false;
        while (n--)
        {
            for (ll i = 0; i <5; i++)
            {
                ll a,b,c;
                cin>>a>>b>>c;
                if(i==0||i==1||i==2)
                {
                    ll k=b*a;
                    ll l=k*c;
                    if(a!=2 || k!=6 || l!=60)
                    {
                        ok=true;
                    }
                }
                else if(i==3)
                {
                    ll k=b*a;
                    ll l=k*c;
                    if(a!=1 || k!=3 || l!=30)
                    {
                        ok=true;
                    }
                }
                else if (i==4)
                {
                    ll k=b*a;
                    ll l=k*c;
                    if(a!=3 || k!=9 || l!=90)
                    {
                        ok=true;
                    }
                }
                
            }
            
        }
        if(ok)
        {
            cout<<"Inconsistent\n";
        }
        else
        {
            cout<<"Consistent\n";
        }
        
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
