#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=1;i<n;i++)
    {
        int x;
        cin>>x;
        mp[x]++;
    }

    for(int i=1;i<=n;i++)
    {
        if(mp[i]==0)
        {
            cout<<i<<'\n';
            break;
        }
    }
    return 0;
}

