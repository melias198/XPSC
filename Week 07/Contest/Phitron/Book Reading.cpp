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
    ll n,m;
    cin>>n>>m;

    ll idx,x,ans;
    if(m%10==0) idx=0;
    else if(m%5==0) idx=25;
    else if(m%2==0) idx=40;
    else idx=45;

    x=n/(m*10);
    ans=x*idx;

    for(ll i=(x*m*10)+m;i<=n;i+=m)
    {
        ans+=i%10;
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
