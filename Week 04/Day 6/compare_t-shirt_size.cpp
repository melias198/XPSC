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
    string a,b;
    cin>>a>>b;
    char sa=a.back();
    char sb=b.back();
    int na=a.size(),ba=b.size();
    if(sa==sb)
    {
        if(na==ba)
        {
            cout<<"="<<'\n';
        }
        else if(sa=='S')
        {
            cout<<(na<ba ? '>':'<')<<'\n';
        }
        else
        {
            cout<<(na<ba ? '<':'>')<<'\n';
        }
    }
    else
    {
        cout<<(sa<sb ? '>':'<')<<'\n';
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