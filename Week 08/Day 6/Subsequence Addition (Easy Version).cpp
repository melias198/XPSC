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
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define cyes cout<<"Yes"<<endl
#define cno cout<<"No"<<endl
#define minus cout<<-1<<endl
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) 
    {
        cin >> a[i];
    }

    sort(a.begin(),a.end());
    if(a[0] != 1) 
    {
        cout << "NO\n";
        return;
    }
    vector<int> dp(5005, 0);
    dp[1] = 1;
    for(int i = 1; i < n; ++i) 
    {
        if(!dp[a[i]]) 
        {
            cout << "NO\n";
            return;
        }
        for(int j = 5000; j >= a[i]; --j) 
        {
            dp[j] |= dp[j - a[i]];
        }
    }
    cout << "YES\n";
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