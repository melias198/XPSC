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
    map<int, ll> mp;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mp[x]++;
    }

    int sz = mp.size();

    if (n == 1 || (n==2 && sz==1))
    {
        cout << "NO" << '\n';
        return;
    }

    int m=0;
    bool is_even=true;
    if(n%2==0) m=n/2;
    else 
    {
        m=(n/2)+1;
        is_even=false;
    }
    
    if ((sz == n) || (is_even && m<=sz) || (!is_even && m<sz))
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
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