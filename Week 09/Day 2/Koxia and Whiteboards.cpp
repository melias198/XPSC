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
#define fast ios::sync_with_stdio(false);cin.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<ll> v(n+m);
    for (int i = 0; i < (n+m); i++)
    {
        cin >> v[i];
    }

    sort(v.begin(),v.end()-1);
    reverse(v.begin(),v.end());

    ll sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
    }

    cout<<sum<<'\n';
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