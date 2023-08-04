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
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) 
    {
        cin >> a[i];
    }

    sort(a.begin(),a.end());
    if(a[0] != 1) 
    {
        cout << "NO\n";
        return;
    }
    long long sum = a[0];
    for(int i = 1; i < n; ++i) 
    {
        if(sum < a[i]) 
        {
            cout << "NO\n";
            return;
        }
        sum += a[i];
    }
    cout << "YES\n";
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