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
    string s;
    cin >> s;
    if (is_sorted(s.begin(), s.end()))
    {
        cout << 0 << "\n";
        return;
    }

    string t = s;
    sort(t.begin(), t.end());
    cout << 1 << "\n";
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
        {
            ans.push_back(i + 1);
        }
    }
    cout << ans.size() << " ";
    for (int i = 0; i<(int)ans.size(); i++)
    {
        cout << ans[i] << " \n"[(i + 1)== (int)ans.size()];
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