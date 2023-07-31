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
    ll x1, y1, x2, y2, x3, y3, ab = 0, ac = 0, bc = 0;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    bc = abs(x2 - x3) + abs(y2 - y3) - 1 + 2;
    ab = abs(x2 - x1) + abs(y2 - y1) - 1 + 2;
    ac = abs(x1 - x3) + abs(y1 - y3) - 1 + 2;
    
    if (bc == ab + ac - 1) cout << 1 << endl;
    else
    {
        ll r = ab + ac - bc;
        ll p = (r - 1) / 2;
        cout << p + 1 << endl;
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
