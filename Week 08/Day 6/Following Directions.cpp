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
	cin >> n;
	string s;
	cin >> s;
	int x = 0, y = 0;
	for (int i = 0; i < n; i++) 
    {
		if (s[i] == 'L') {x--;}
		if (s[i] == 'R') {x++;}
		if (s[i] == 'D') {y--;}
		if (s[i] == 'U') {y++;}
		if (x == 1 && y == 1) {cout << "YES\n"; return;}
	}	
	cout << "NO\n";
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