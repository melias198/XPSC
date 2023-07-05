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
        int a,b,c;
	    cin>>a>>b>>c;
	    int alice=max({a+b,a+c,b+c});
	    int d,e,f;
	    cin>>d>>e>>f;
	    int bob=max({d+e,d+f,e+f});
	    if(alice>bob) cout<<"Alice"<<'\n';
	    else if(alice<bob) cout<<"Bob"<<'\n';
	    else cout<<"Tie"<<'\n';
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
