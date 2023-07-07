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
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    int ax = min(a, x);
    int by = min(b, y);
    a -= ax;
    x -= ax;
    b -= by;
    y -= by;
    if (c >= x + y) cout << "YES" << endl;
    else cout << "NO" << endl;
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
