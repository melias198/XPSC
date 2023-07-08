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
    int n=7;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int mx=*max_element(v.begin(),v.end());

    int a=v[0];
    int b=v[1];
    int c=mx-a-b;

    cout<<a<<" "<<b<<" "<<c;
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
