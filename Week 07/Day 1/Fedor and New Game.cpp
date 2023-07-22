#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>v(m+1);
    for(int i=0;i<=m;i++)
    {
        cin>>v[i];
    }

    int ans=0;
    for(int i=0;i<m;i++)
    {
        if(__builtin_popcount(v[i]^v[m])<=k) ans++;
    }

    cout<<ans<<'\n';
    return 0;
}
