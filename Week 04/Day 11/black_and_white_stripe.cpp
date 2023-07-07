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
     int n, k;
     cin >> n >> k;
     string s;
     cin >> s;
     vector<int> w(n + 1);
     for (int i = 1; i <= n; i++)
     {
        w[i] = w[i - 1] + int(s[i - 1] == 'W');
     }
        
     int result = INT_MAX;
     for (int i = k; i <= n; i++)
     {
        result = min(result, w[i] - w[i - k]);
     }
     cout << result << endl;
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
