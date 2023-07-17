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
    ll x;
    cin>>x;
    if(x>1)
    {
        if(x<=1e6)
        {
            ll c=x/2;
            cout<<1<<" "<<x-c<<" "<<c<<'\n';
        }
        else if(x>1e6 && x%1000000!=0)  
        {
        cout <<1000000<<" "<<x/1000000<<" "<<x%1000000<<'\n';
        }
        else
        {
        cout <<1000000<<" "<<x/1000000-1<<" "<<1000000<<'\n';
        }
    }
    else
    {
        cout<<-1<<'\n';
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
