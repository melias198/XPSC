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
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }

    ll cnt = 0, flag = 0;
    for (ll i = 1; i < n; i++)
    {
        if ((v[i - 1] > v[i]) and flag != 1)
        {
            cnt++;
            flag = 1;
        }
        else if ((v[i - 1] < v[i]) and flag != -1)
        {
            cnt++;
            flag = -1;
        }
    }

    cout << cnt + 1 << '\n';
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