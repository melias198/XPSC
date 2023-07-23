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
    if(n==0) cout<<4<<" "<<6<<" "<<3<<" "<<7<<'\n';
    else
    {
        ll a=1,b=2,c,d;
        for(c=3;c<(ll)1e8;c++)
        {
           d=c^n;
           if((c^d)==n && (d>2 && c!=d)) break;
        }
    
        cout<<a<<" "<<b<<" "<<c<<" "<<d<<'\n';
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
