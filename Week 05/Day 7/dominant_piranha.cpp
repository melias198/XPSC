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
	vector<int> v(n);
	int mx = 0;
	for(int i=0;i<n;i++) 
    {
        int x;
		cin >> x;
        v[i]=x;
		mx = max(mx, x);
	}

	int idx = -1;
	for (int i = 0; i < n; ++i) 
    {
		if (v[i] != mx) continue;
		if (i > 0 && v[i - 1] != mx) idx = i + 1;
		if (i < n - 1 && v[i + 1] != mx) idx = i + 1;
	}
	cout << idx << endl;
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
