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
     string s;
     cin >> s;
     int n = s.length();
     vector<bool> a(n + 1);
     a[0] = true;
     for(int i=0;i<n;i++)
     {
        a[i + 1] = a[i] && (s[i] == '1' || s[i] == '?');
     }
     vector<bool> b(n + 1);
     b[0] = true;
     for(int i = n - 1; i >= 0; i--)
     {
        b[n - i] = b[n - i - 1] && (s[i] == '0' || s[i] == '?');
     }
            
     int result = 0;
     for(int i=0;i<n;i++)
     {
        if(a[i] && b[n - i - 1]) result++;
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
