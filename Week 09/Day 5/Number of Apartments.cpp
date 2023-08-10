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
    cin>>n;
    
    if (n == 1 || n == 2 || n == 4)
    {
        cout << -1 << endl;
        return;
    }
    if (n % 3 == 0)
    {
        cout << n / 3 << ' ' << 0 << ' ' << 0 << endl;
    }
    else if (n % 3 == 1)
    {
        cout << (n - 7) / 3 << ' ' << 0 << ' ' << 1 << endl;
    }
    else
    {
        cout << (n - 5) / 3 << ' ' << 1 << ' ' << 0 << endl;
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