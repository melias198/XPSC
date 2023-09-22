#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;

    vector<ll>v(n);
    for(int i=0;i<n;i++) 
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    ll val=0;
    if(n%2==0) val=v[n/2-1];
    else val=v[n/2];

    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=abs(val-v[i]);
    }

    cout<<ans<<'\n';
    
    return 0;
}