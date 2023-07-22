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
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    for(int x=0;x<(1<<8);x++)
    {
        vector<int>tmp=v;
        for(int i=0;i<n;i++)
        {
            tmp[i]=tmp[i]^x;
        }

        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=ans^tmp[i];
        }

        if(ans==0)
        {
            cout<<x<<'\n';
            return;
        }
    }

    cout<<-1<<'\n';

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
