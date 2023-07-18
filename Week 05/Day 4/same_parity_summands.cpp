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
    cin>>n>>k;

    int odd=n-k+1;
    int even=n-(2*(k-1));
    if(odd&1 && odd>0)
    {
        int rem=n-(k-1);
        cout<<"YES"<<'\n';
        for(int i=1;i<k;i++)
        {
            cout<<1<<" ";
        }
        cout<<rem<<'\n';
    }
    else if(!(even&1) && even>0)
    {
        cout<<"YES"<<'\n';
        for(int i=1;i<k;i++)
        {
            cout<<2<<" ";
        }
        cout<<even<<'\n';
    }
    else
    {
        cout<<"NO"<<'\n';
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
