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
   int n;
   cin>>n;
   int sz=n*(n-1)/2;
   vector<int>v(sz);
   map<int,int>mp;
   for(int i=0;i<sz;i++)
   {
    cin>>v[i];
    mp[v[i]]++;
   }

    vector<int>result(n);
    for(auto it:mp)
    {
        result.push_back(it.first);
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