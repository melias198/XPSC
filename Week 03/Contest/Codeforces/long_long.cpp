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
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }

    ll sum=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]<0) sum+=(v[i]*-1);
        else sum+=v[i];
    }

    ll oparetion=0;
    for(ll i=0;i<n;i++)
    {
        if(v[i]<0)
        {
        oparetion++;
        while(v[i]<=0)
        {
            i++;
        }
        }
        
    }
    cout<<sum<<" "<<oparetion<<'\n';
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
