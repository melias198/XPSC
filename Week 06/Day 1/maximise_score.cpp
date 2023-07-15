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
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    vector<int>result;
    result.push_back(abs(v[1]-v[0]));
    for(int i=1;i<n-2;i++)
    {
        int a=abs(v[i+1]-v[i]);
        int b=abs(v[i]-v[i-1]);
        int x=max(a,b);
        result.push_back(x);
    }
    result.push_back(abs(v[n-1]-v[n-2]));
    int ans=*min_element(result.begin(),result.end());
    cout<<ans<<'\n';
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
