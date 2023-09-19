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
    ll n, m, b, A1 = 0, A = 0, B = 0;
    cin >> n >> m;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for (ll i = 0; i < m; i++)
    {
        cin >> b;
        B |= b;
    }
    for (ll i = 0; i < n; i++)
    {
        A ^= a[i];
        A1 ^= (a[i] | B);
    }
    if (n % 2 == 0)
        cout << A1 << " " << A << endl;
    else
        cout << A << " " << A1 << endl;
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