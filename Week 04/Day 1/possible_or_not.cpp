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
    ll n,b;
    cin>>n>>b;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if((x&b)==b) v.push_back(x);
    }

    if(v.size()==0) cout<<"NO"<<'\n';
    else
    {
        int a=v[0];
        for(int i=1;i<v.size();i++)
        {
            a=a&v[i];
        }
        if(a==b)
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }
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
