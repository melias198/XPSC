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
    int n, k;
    cin >> n >> k;

    bool found = false;
    for (int x = 0; x < 2; ++x)
    {
        if (n - x * k >= 0 && (n - x * k) % 2 == 0)
        {
            cout << "YES" <<endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "NO" << std::endl;
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