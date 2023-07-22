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

    sort(v.begin(),v.end());

    ll ans=0;
    for (int j=29; j>=0; j--)
    {
        ll cnt=0;
        for (int i=0; i<n; i++)
        {
            if (v[i]>=(1<<j)&&v[i]<(1<<(j+1)))
            {
                cnt++;
            }
        }
        ans+=cnt*(cnt-1)/2;
    }

    cout<<ans<<'\n';
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
