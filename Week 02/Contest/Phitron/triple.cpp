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

      bool flag=true;

      for(auto it:mp)
      {
        if(it.second>=3)
        {
            cout<<it.first<<'\n';
            flag=false;
            break;
        }
      }
      if(flag) cout<<"-1"<<'\n';
    }
    return 0;
}

