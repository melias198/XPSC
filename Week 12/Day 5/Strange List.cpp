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
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll x;
    cin >> x;
    ll a[n];
    ll b[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        ll val = a[i];
        ll count = 1;
        while (val % x == 0)
        {
            val = val / x;
            count++;
        }

        b[i] = count;
    }

    ll index = 0;
    ll m = INT_MAX;
    for (ll i = 0; i < n; i++)
    {
        if (b[i] < m)
        {
            m = b[i];
            index = i;
        }
    }
    ll sum = 0;
    for (ll i = index; i < n; i++)
        sum += m * a[i];
    for (ll i = index - 1; i >= 0; i--)
        sum += (m + 1) * a[i];

    cout << sum << endl;
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