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

    ll sum=(n*(n+1))/2;
    if(!(sum&1))
    {
        cout<<"YES"<<'\n';
        ll even_sum=0;
        for(int i=2;i<=n;i+=2)
        {
            cout<<i<<" ";
            even_sum+=i;
        }

        ll odd_sum=0;
        for(int i=1;i<=n-2;i+=2)
        {
            cout<<i<<" ";
            odd_sum+=i;
        }
        cout<<even_sum-odd_sum<<'\n';
    }
    else
    {
        cout<<"NO"<<'\n';
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
