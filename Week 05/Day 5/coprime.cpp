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
vector<int>pairs[1001];

void solve()
{
   int n;
   cin>>n;
   vector<int> id[1001];
    for(int i = 1; i <= n; ++i) 
    {
        int x; cin >> x;
        id[x].push_back(i);
    }
    
    int ans = -1;
    for(int i = 1; i <= 1000; ++i) 
    {
        for(int j: pairs[i]) 
        {
            if(!id[i].empty() && !id[j].empty()) 
            {
                ans = max(ans, id[i].back() + id[j].back());
            }
        }
    }
    cout << ans << "\n";
   
}

int main()
{
    for(int i = 1; i <= 1000; ++i) 
    {
        for(int j = 1; j <= 1000; ++j) 
        {
            if(__gcd(i, j) == 1) 
            {
                pairs[i].push_back(j);
            }
        }
    }
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
