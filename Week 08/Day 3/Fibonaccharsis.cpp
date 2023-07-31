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
    int n,k;
    cin >> n >> k;
     
    int ans = 0;
     
    for (int i = 1; i <= n; i++) 
    {
        int second = n;
        int first = i; 
        bool valid_seq = true;
        for (int j = 0; j < k - 2; j++) 
        {
            int fx = first;
            first = second - fx;
            second = fx;
            valid_seq &= first <= second;
            valid_seq &= min(first, second) >= 0;
            if (!valid_seq) break;
        }
        if (valid_seq) ans++;
    }
 
    cout << ans << endl;
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
