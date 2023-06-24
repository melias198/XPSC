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
    int l, r, x;
    cin >> l >> r >> x;
    int a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << 0 << '\n';
    }
    else if (abs(b - a) >= x)
    {
        cout << 1 << '\n';
    }
    else if (b > a)
    {
        if (b + x <= r or a - x >= l)
        {
            cout << 2 << '\n';
        }
        else if (a + x <= r and b - l >= x)
        {
            cout << 3 << '\n';
        }
        else
        {
            cout << -1 << '\n';
        }
    }
    else
    {
        if (a + x <= r or b - x >= l)
        {
            cout << 2 << '\n';
        }
        else if (a - x >= l and r - b >= x)
        {
            cout << 3 << '\n';
        }
        else
        {
            cout << -1 << '\n';
        }
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
