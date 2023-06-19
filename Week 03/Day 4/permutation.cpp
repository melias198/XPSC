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
        vector<int>permutation[n+1];
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n-1;j++)
            {
                int x;
                cin>>x;
                permutation[x].push_back(j);
            }
        }

        for(int i=1;i<=n;i++)
        {
            sort(permutation[i].begin(),permutation[i].end());
        }

        int ans[n+1];

        for(int i=1;i<=n;i++)
        {
            if(permutation[i][n-2]==(n-1))
            {
                if(permutation[i][0]==(n-1))
                {
                    ans[n]=i;
                }
                else
                {
                    ans[n-1]=i;
                }
            }
            else
            {
                ans[permutation[i][n-2]]=i;
            }
        }

        for(int i=1;i<=n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}

