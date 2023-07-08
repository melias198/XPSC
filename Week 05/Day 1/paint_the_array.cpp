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

ll gcd(ll a,ll b)
{
    if(a%b==0) return b;
    else return gcd(b,a%b);
}

void solve()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    ll g=v[0];
    for(int i=2;i<n;i+=2)
    {
        g=gcd(g,v[i]);
    }

    bool flag;
    if(g>1)
    {
        flag=true;
        for(int i=1;i<n;i+=2)
        {
            if(v[i]%g==0)
            {
                flag=false;
                break;
            }
        }

        if(flag)
        {
            cout<<g<<'\n';
            return;
        }
    }


    g=v[1];
    for(int i=3;i<n;i+=2)
    {
        g=gcd(g,v[i]);
    }

    if(g>1)
    {
        flag=true;
        for(int i=0;i<n;i+=2)
        {
            if(v[i]%g==0)
            {
                flag=false;
                break;
            }
        }

        if(flag)
        {
            cout<<g<<'\n';
            return;
        }
    }

    cout<<0<<'\n';

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
