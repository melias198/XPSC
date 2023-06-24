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

int get_count(int x)
{
    int total=0;
    while(x%2==0)
    {
        x/=2;
        total++;
    }
    return total;
}

void solve()
{
    int n;
    cin>>n;
    long long x=0,extra=0;
    vector<int>a(n),b;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        x+=get_count(a[i]);
        int cnt=get_count(i+1);
        extra+=cnt;
        b.push_back(cnt);
    }

    if(x>=n)
    {
        cout<<0<<'\n';
        return;
    }

    if(x+extra < n)
    {
        cout<<-1<<'\n';
        return;
    }

    int ans=0;
    sort(b.rbegin(),b.rend());
    for(auto it:b)
    {
        ans++;
        if(x+it>=n) break;
        x+=it;
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
