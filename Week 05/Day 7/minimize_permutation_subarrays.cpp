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
const int N=200010;
int idx[N];

void solve()
{
    int n; 
    cin >> n;

    for(int i = 1; i <= n; ++i) 
    {
        int x; cin >> x;
        idx[x] = i;
    }

    if(idx[n] < min(idx[1], idx[2])) 
    {
        cout << idx[n] << ' ' << min(idx[1], idx[2]) << '\n';
    } 
    else if(idx[n] > max(idx[1], idx[2])) 
    {
        cout << idx[n] << ' ' << max(idx[1], idx[2]) << '\n';
    } 
    else 
    {
        cout << idx[1] << ' ' << idx[2] << '\n';
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
