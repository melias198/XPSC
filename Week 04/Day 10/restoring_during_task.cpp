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
    int n;
    cin >> n;
    int s[n];
    int f[n];
    for (int i = 0; i < n; ++i) 
    {
        cin >> s[i];
    }
 
    for (int i = 0; i < n; ++i) 
    {
        cin >> f[i];
    }
    int curTime = 0;
    int d[n];
    for (int i = 0; i < n; ++i) 
    {
        curTime = max(curTime, s[i]);
        d[i] = f[i] - curTime;
        curTime = f[i];
    }
    for (auto now: d) 
    {
        cout << now << " ";
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
