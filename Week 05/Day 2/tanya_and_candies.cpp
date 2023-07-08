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
    int total_sum=0;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        total_sum+=v[i];
    }

    int sum=0,odd_sum=0;
    for(int i=1;i<n;i+=2)
    {
        odd_sum+=v[i];
    }

    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(i%2) odd_sum=total_sum-sum-v[i];
        else sum=total_sum-odd_sum-v[i];
        if(sum==odd_sum) ans++;
    }

    cout<<ans<<'\n';
}

int main()
{
    fast;
    solve();
  //  ll t;
  //  cin >> t;
  //  while (t--)
  //  {
  //      solve();
  //  }
    return 0;
}
