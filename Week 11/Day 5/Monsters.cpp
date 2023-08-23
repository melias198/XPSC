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

struct ComparePairFirst
{
    bool operator()(const pair<ll, ll> &a, const pair<ll, ll> &b)
    {
        if (a.first == b.first)
        {
            return a.second > b.second;
        }
        return a.first < b.first;
    }
};

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &x : a)
    {
      cin >> x;
      x %= k;
      if (!x) x = k;
    }
    vector<int> ord(n);
    iota(ord.begin(), ord.end(), 0);
    stable_sort(ord.begin(), ord.end(), [&](int i, int j) {
      return a[i] > a[j];
    });
    for (auto &x : ord) cout << x + 1 << ' ';
    cout << endl;
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