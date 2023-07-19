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

int cnt[3];

void solve()
{
    memset(cnt, 0, sizeof cnt);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        cnt[x%3]++;
    }

    int res = cnt[0];
    int mn = min(cnt[1], cnt[2]);
    res += mn;
    cnt[1] -= mn, cnt[2] -= mn;
    res += (cnt[1] + cnt[2]) / 3;
    cout << res << endl;
    
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
