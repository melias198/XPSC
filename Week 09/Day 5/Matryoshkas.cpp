#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        set<int>v;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            mp[x]++;
            v.insert(x);
            v.insert(x+1);
        }

        int ans=0;
        int last=0;
        for(auto it:v)
        {
            int cnt=mp[it];
            ans+=max(0,cnt-last);
            last = cnt;
        }
        cout<<ans<<'\n';
    }
    return 0;
}