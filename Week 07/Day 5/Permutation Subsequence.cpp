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
const int MOD=1e9+7;

void solve()
{
    ll n;
    cin>>n;
    map<ll,int>mp;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        mp[x]++;
    }

    ll res=1,ans=0;
    for(int i=1;i<=n;i++)
    {
        res=(res*mp[i])%MOD;
        ans=(ans+res)%MOD;
    }

    cout<<ans<<'\n';
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
