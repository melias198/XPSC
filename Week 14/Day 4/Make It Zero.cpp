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
    
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    if (n & 1)
    {
        cout << "4" << '\n';
        cout << "1 " << n - 1 << '\n';
        cout << "1 " << n - 1 << '\n';
        cout << n - 1 << ' ' << n << '\n';
        cout << n - 1 << ' ' << n << '\n';
    }
    else
    {
        cout << "2" << '\n';
        cout << "1 " << n << '\n';
        cout << "1 " << n << '\n';
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