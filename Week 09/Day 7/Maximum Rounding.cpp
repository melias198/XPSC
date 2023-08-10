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
    string s;
    cin >> s;
    s = '0' + s;
    int p = s.size();
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] >= '5')
            s[i - 1]++, p = i;
    }
    for (int i = (s[0] == '0'); i < (int)s.size(); i++)
    {
        cout << (i >= p ? '0' : s[i]);
    }
    cout << "\n";
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