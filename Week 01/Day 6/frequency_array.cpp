#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m; cin>>n>>m;
    vector<int>v;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        mp[x]++;
        v.push_back(x);
    }
    for(int i=1;i<=m;i++)
    {
        cout<<mp[i]<<'\n';
    }
    return 0;
}

