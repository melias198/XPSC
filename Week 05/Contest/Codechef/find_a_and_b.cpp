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
    ll x,y,z;
    cin>>x>>y>>z;
    ll a=x*y;
    ll b=y*z;
    ll c=x*z;
    if(a%z==0) cout<<a<<" "<<z<<'\n';
    else if(b%x==0) cout<<b<<" "<<x<<'\n';
    else if(c%y==0) cout<<c<<" "<<y<<'\n';
    else cout<<-1<<'\n';
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
