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

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;

    ll c1 = 0, c2 = 0, ans = 0;

    if (x % y == 0)
    {
        c2 = (n / y) - (n / x);
    }
    else if (y % x == 0)
        c1 = (n / x) - (n / y);

    else
    {
        ll k = (x * y) / gcd(x, y);
        c1 = (n / x) - (n / k);
        c2 = (n / y) - (n / k);
    }

    ans = (n * (n + 1)) / 2;
    n -= c1;
    ans -= (n * (n + 1)) / 2;
    ans -= (c2 * (c2 + 1)) / 2;
    cout << ans << '\n';
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