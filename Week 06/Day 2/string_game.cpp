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
    string s;
    cin>>s;
    int one =0,zero = 0;
	for(int i=0; i<n; i++)
    {
	    if(s[i] == '0')
        {
	        zero++;
	    }
	    else
        {
	        one++;
	    }
	}
	int gamer = min(one,zero);
	if(gamer%2==0)
    {
	    cout<<"Ramos"<<endl;
	}
	else
    {
	    cout<<"Zlatan"<<endl;
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
