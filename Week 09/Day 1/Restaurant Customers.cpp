#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    map<int,ll>prefix;
    for(int i=1;i<=n;i++)
    {
        int l,r;
        cin>>l>>r;
        prefix[l]++;
        prefix[r+1]--;
    }

    ll sum=0,ans=0;
    for(auto it:prefix)
    {
        sum+=it.second;
        ans=max(ans,sum);
    }

    cout<<ans<<'\n';

    return 0;
}