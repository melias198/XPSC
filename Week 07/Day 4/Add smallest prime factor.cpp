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
    int x,y;
    cin>>x>>y;
    int time=0;
    if(!(x&1))
    {
        time=(y-x)/2;
        if(y&1) time++;
    }
    else
    {
        if(x==3 || x==9) x+=3;
        else if(x==5) x+=5;
        else x+=7;
        time=((y-x)/2)+1;
        if(y&1) time++;

    }
    cout<<time<<'\n';
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
