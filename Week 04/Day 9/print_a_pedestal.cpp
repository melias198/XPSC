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
    int n;
    cin>>n;
    for(int a = 3; a < n; a++) 
    {
        int c = (n - a) / 2;
        int b = n - a - c;
        if (c > 1 && b+1 < a) 
        {
            c--;
            b++;
        }
        if (a > b && b > c) 
        {
            cout << b << ' ' << a << ' ' << c << endl;
            return;
        }
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
