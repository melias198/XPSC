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
    vector<pair<int,int>>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first;
        a[i].second=i;
    }

    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    
    vector<int>ans(n);
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    for(int i=0;i<n;i++)
    {
        ans[a[i].second]=b[i];
    }
    
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    cout<<'\n';
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
