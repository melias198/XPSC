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
   ll n,k,b;
   cin>>n;

   vector<ll>v[n];
   set<ll>st,tst;
   map<ll,ll>mp,tmp;
   map<ll,vector<ll>>index;

   ll mx=0;
   for(int i=0;i<n;i++)
   {
        vector<ll>temp;
        cin>>k;
        for(int j=0;j<k;j++)
        {
            cin>>b;
            temp.push_back(b);
            mp[b]++;
            st.insert(b);
            index[b].push_back(i);
        }
        v[i]=temp;
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