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
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
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

    vector<int>ans;
    for(int i=0;i<n-1;i++)
    {
        if(v[i]<=v[i+1]) ans.push_back(v[i]);
        else 
        {
            ans.push_back(v[i]);
            ans.push_back(v[i+1]);
        }
    }
    ans.push_back(v[n-1]);

    int m=ans.size();
    cout<<m<<'\n';
    for(auto it:ans) cout<<it<<" ";
    cout<<"\n";
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