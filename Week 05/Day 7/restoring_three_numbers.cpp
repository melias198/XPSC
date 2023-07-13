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
    vector<ll>v(4);
    for(int i=0;i<4;i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());
    ll mx=v[3];
    ll a=mx-v[0];
    ll b=mx-v[1];
    ll c=mx-v[2];
    cout<<a<<" "<<b<<" "<<c<<'\n';
}

int main()
{
    fast;
    solve();
  // ll t;
  //  cin >> t;
  //  while (t--)
  //  {
  //      solve();
  //  }
    return 0;
}
