#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        mp[x]++;
    }

    for(auto it:mp)
    {
        if(it.second==1)
        {
            cout<<it.first<<'\n';
            break;
        }
    }
    return 0;
}

