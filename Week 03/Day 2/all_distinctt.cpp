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
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            mp[x]++;
        }

        if((n-mp.size())%2==0) cout<<mp.size()<<'\n';
        else cout<<mp.size()-1<<'\n';
    }
    
    return 0;
}