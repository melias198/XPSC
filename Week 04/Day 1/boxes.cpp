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
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]&1) a[i]--;
    }
    sort(a,a+n);
    ll mx=0;
    map<ll,ll>mp;
    for(ll i=0;i<n;i++)
    {
        ll ans=0;
        while(a[i]>1)
        {
            ans++;
            a[i]/=2;
        }
        mp[ans]++;
        mx=max(mx,ans);
    }
    ll final=ceil(mp[mx]*1.0/2);
    cout<<final<<'\n';
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
