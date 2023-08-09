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
    vector<int> positive;
    vector<int> negative;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
        if (x >= 0)
            positive.push_back(x);
        else
            negative.push_back(x);
    }

    if (sum == 0)
    {
        cout << "NO" << '\n';
        return;
    }

    sort(positive.begin(), positive.end(), greater<int>());
    sort(negative.begin(), negative.end(), greater<int>());
    cout << "YES" << '\n';
    if (sum < 0)
    {
        for (auto it : negative)
            cout << it << " ";
        for (auto it : positive)
            cout << it << " ";
    }
    else
    {
        for (auto it : positive)
            cout << it << " ";
        for (auto it : negative)
            cout << it << " ";
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