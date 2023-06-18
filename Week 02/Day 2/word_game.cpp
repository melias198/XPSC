#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<string>man[3];
        map<string,int>mp;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<n;j++)
            {
                string s;
                cin>>s;
                man[i].push_back(s);
                mp[s]++;
            }
        }

        vector<int>ans(3);

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mp[man[i][j]]==1)
                {
                    ans[i]+=3;
                }
                else if(mp[man[i][j]]==2)
                {
                    ans[i]+=1;
                }
            }
        }
        for(auto it:ans)
        {
            cout<<it<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

