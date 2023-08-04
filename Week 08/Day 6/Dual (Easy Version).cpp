/*
||-----------------------------------||
||           Mohammad Elias          ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
#define ll long long int
#define pub push_back
#define pob pop_back
#define PI 3.14159265359
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define cyes cout<<"Yes"<<endl
#define cno cout<<"No"<<endl
#define minus cout<<-1<<endl
using namespace std;

void solve()
{
    ll n, pos = 0, neg = 0, zero = 0, maxPos = 0, minNeg = 0, maxPosIdx = 0, minNegIdx = 0;
    cin >> n;
    vector<pair<ll, ll> > v;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > 0)
        {
            pos++;
            if (arr[i] > maxPos) 
            {
                maxPos = arr[i];
                maxPosIdx = i;
            }
        }
        else if (arr[i] < 0)
        {
            neg++;
            if (arr[i] < minNeg) 
            {
                minNeg = arr[i];
                minNegIdx = i;
            }
        }
        else zero++;
    }

    if (neg == 0)
    {
        for (ll i = 1; i < n; i++)
        {
            v.push_back({i + 1, i});
        }
    }
    else if (pos == 0)
    {
        for (ll i = n - 1; i > 0; i--)
        {
            v.push_back({i, i + 1});
        }
    }
    else if (pos >= 13)
    {
        while (arr[maxPosIdx] < 20) 
        {
            v.push_back({maxPosIdx + 1, maxPosIdx + 1});
            arr[maxPosIdx] *= 2;
        }
        for (ll i = 0; i < n; i++) 
        {
            if (arr[i] < 0) 
            {
                v.push_back({i + 1, maxPosIdx + 1});
            }
        }
        for (ll i = 1; i < n; i++)
        {
            v.push_back({i + 1, i});
        }
    }
    else if (neg >= 13)
    {
        while (arr[minNegIdx] > -20) 
        {
            v.push_back({minNegIdx + 1, minNegIdx + 1});
            arr[minNegIdx] *= 2;
        }
        for (ll i = 0; i < n; i++) 
        {
            if (arr[i] > 0) 
            {
                v.push_back({i + 1, minNegIdx + 1});
            }
            }
            for (ll i = n - 1; i > 0; i--)
            {
                v.push_back({i, i + 1});
            }
        }
        else if (maxPos >= -minNeg)
        {
            for (ll i = 0; i < n; i++) {
                if (arr[i] < 0) {
                    v.push_back({i + 1, maxPosIdx + 1});
                }
            }
            for (ll i = 1; i < n; i++)
            {
                v.push_back({i + 1, i});
            }
        }
        else
        {
            for (ll i = 0; i < n; i++) {
                if (arr[i] > 0) {
                    v.push_back({i + 1, minNegIdx + 1});
                }
            }
            for (ll i = n - 1; i > 0; i--)
            {
                v.push_back({i, i + 1});
            }
        }
        cout << v.size() << '\n';
        for (auto it : v) 
        {
            cout << it.first << ' ' << it.second << '\n';
        }
}

int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}