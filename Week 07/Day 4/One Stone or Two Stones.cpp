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
    ll x,y;
    cin>>x>>y;
    if(x>y && x-y>=2) cout<<"CHEF"<<'\n';
    else if(x<y && y-x>=2) cout<<"CHEFINA"<<'\n';
    else if((min(x,y)&1)) cout<<"CHEF"<<'\n';
    else cout<<"CHEFINA"<<'\n';
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
