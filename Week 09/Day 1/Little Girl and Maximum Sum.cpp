#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end(),greater<int>());

    ll prefix[n+1]={0};
    for(int i=0;i<m;i++)
    {
        int l,r;
        cin>>l>>r;
        prefix[l]++;
        prefix[r+1]--;
    }

    ll sum=0,tmp=0;
    vector<ll>res(n);

    for(int i=1;i<=n;i++)
    {
        tmp+=prefix[i];
        res.push_back(tmp);
    }

    sort(res.begin(),res.end(),greater<int>());

    for(int i=0;i<n;i++)
    {
        sum+=v[i]*res[i];
    }
    cout<<sum<<'\n';

    return 0;
}