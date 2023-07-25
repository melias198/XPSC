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
    vector<pair<int,int>>v(n);

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v[i].first=x;
    }

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v[i].second=x;
    }

    int cnt=0;
    for(int i=0;i<n;i++)
    {
        int a=min(v[i].first,v[i].second);
        int b=max(v[i].first,v[i].second);
        if(a*2>=b) cnt++;
    }

    cout<<cnt<<'\n';
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
