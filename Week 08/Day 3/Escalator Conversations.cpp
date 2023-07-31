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
    int n,m,k,H; 
    cin >> n >> m >> k >> H;
    int ans = 0;
    for(int i=0;i<n;i++) 
    {
        int x; cin >> x;
        ans += (H != x) && abs(H - x) % k == 0 && abs(H-x) <= (m-1) * k;
    }
    cout << ans << endl;
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
