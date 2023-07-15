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
    ll n,k;
    cin>>n>>k;
    if(n<2*k)
    {
        cout<<"NO"<<'\n';
    }
    else
    {
        ll x=n/2;
        if(n%2!=0) x=x+1;

        ll value=x-k;
        if(value%2==0) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
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
