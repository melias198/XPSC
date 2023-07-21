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
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    ll gcd=0;
    for(int i=0;i<n;i++)
    {
        ll val=0;
        if(v[i]!=1) val=v[i];
        else continue;
        ll ans=0;
        for(int j=0;j<n;j++)
        {
            if(val%v[j]==0 && v[j]<=n)
            {
                ans++;
            }
        }
        gcd=max(gcd,ans);
    }

    cout<<gcd<<'\n';
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
