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
    int n, c, ans = 0; 
    cin >> n >> c;
    priority_queue<int> q;
    for(int i = 1, x; i <= n; ++i) 
    {
        cin >> x;
        q.push(-x - i);
    }

    while(!q.empty()) 
    {
        int x = -q.top(); q.pop();
        if(x > c) break;
        ++ans;
        c -= x;
    }
    
    cout << ans << "\n";
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
