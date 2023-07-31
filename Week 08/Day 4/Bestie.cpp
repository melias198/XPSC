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

    ll GCD=v[0];
    for(int i=0;i<n;i++)
    {
        GCD=__gcd(GCD,v[i]);
    }

    if(GCD==1)
    {
        cout<<0<<'\n';
        return;
    }

    ll GCD1=__gcd(GCD,n);
    if(GCD1==1)
    {
        cout<<1<<'\n';
        return;
    }

    ll GCD2=__gcd(GCD,n-1);
    if(GCD2==1)
    {
        cout<<2<<'\n';
        return;
    }

    cout<<3<<'\n';
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
