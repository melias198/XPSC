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
   for(int i=0;i<n;i++)
   {
       cin>>v[i];
   }

   ll x=0;
   if(n%2==0) yes;
   else
   {
        for(int i=0;i<n-1;i++)
        {
            if(v[i+1]<=v[i])
            {
                x=1;
                break;
            }
        }
        if(x==1) yes;
        else no;
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