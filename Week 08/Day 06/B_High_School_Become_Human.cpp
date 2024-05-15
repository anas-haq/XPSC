/*
    Author: Anas
    Date:   15-05-2024
    Time:   12:10:28
    File:   B_High_School_Become_Human.cpp
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll a, b;
    cin >> a >> b;
    if(a<10 && b<10)
    {
        ll ans=pow(a,b);
        ll ans1=pow(b,a);
        if(ans>ans1)
        {
            cout<<">";
        }
        else if(ans<ans1)
        {
            cout<<"<";
        }
        else
        {
            cout<<"=";
        }
        return 0;
        
    }
    if (a == 1 && b == 1)
    {
        cout << "=";
        return 0;
    }
    if (a == 1)
    {
        cout << "<";
        return 0;
    }
    if (b == 1)
    {
        cout << ">";
        return 0;
    }
    if (a == b || (a * 2) == b || a == (b * 2))
    {
        cout << "=";
    }
    else if (a > b)
    {
        cout << "<";
    }
    else
    {
        cout << ">";
    }
   

    return 0;
}