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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
    }
    sort(s.begin(),s.end());
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(mp[s[i]+20])
        {
            ans=abs(mp[s[i]]-mp[s[i]+20]);
        }
    }
    cout<<ans<<'\n';
    cout<<s<<'\n';
}

int main()
{
    fast;
    solve();
    ll t;
  //  cin >> t;
  //  while (t--) 
   // {
  //      solve();
    //}
    return 0;
}
