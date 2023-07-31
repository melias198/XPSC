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
    int sum=0;
    bool flag=false;
    for(int i=1;i<=n;i++) 
    {
		int x;
		cin>>x;
		if(x==0) 
        {
			sum++;
		} 
        else if(x>=2) 
        {
			flag=true;
		}
	}

    if(sum<=(n+1)/2) 
    {
		cout<<"0\n";
	} 
    else if(flag||sum==n) 
    {
		cout<<"1\n";
    } 
    else 
    {
		cout<<"2\n";
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
