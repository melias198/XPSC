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

    int n, a, b;
    cin >> n >> a >> b;

    vector<int> p;
    p.push_back(a);
    for (int j = n; j > 0; --j)
    {
        if (j != a && j != b)
        {
            p.push_back(j);
        }
    }
    p.push_back(b);

    if ((int)p.size()==n && *min_element(p.begin(), p.begin() + n / 2) == a && *max_element(p.begin() + n / 2, p.end()) == b)
    {
        for (int val : p)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
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