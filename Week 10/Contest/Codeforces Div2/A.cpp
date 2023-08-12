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
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }

    int sz = mp.size();
    if (sz == 1)
    {
        cout << -1 << '\n';
        return;
    }

    vector<int> b;
    vector<int> c;

    const auto val = mp.begin()->first;
    const auto idx = mp.begin()->second;

    for (int i = 0; i < idx; i++)
    {
        b.push_back(val);
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] != val)
            c.push_back(v[i]);
    }

    cout << idx << " " << n - idx << '\n';
    for (int i = 0; i < idx; i++)
    {
        cout << b[i] << " ";
    }
    cout << '\n';

    for (int i = 0; i < (int)c.size(); i++)
    {
        cout << c[i] << " ";
    }
    cout << '\n';
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