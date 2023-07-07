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
const int inf = 1e9 + 7;

bool equals(vector<int>&a, vector<int>&b, int n)
{
    int dif = inf;
    for(int i=0;i<n;i++)
    {
        if(b[i] != 0) dif = min(dif, a[i] - b[i]);
    }
    if(dif < 0) return false; 
    if(dif == inf) return true;
    for(int i=0;i<n;i++)
    {
        if(a[i] - b[i] > dif) return false;
        if(b[i] != 0 && a[i] - b[i] < dif) return false;
    }
    return true;
}

void solve()
{
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }

    cout << (equals(a, b, n) ? "YES\n" : "NO\n");
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
