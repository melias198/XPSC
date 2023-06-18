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

    int n,m;
    cin>>n>>m;
    int mat[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }

    long long ans=0,sum,x,y;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            sum=mat[i][j];
            x=j-1;
            y=j+1;
            for(int k=i-1;k>=0;k--)
            {
                if(x>=0)
                {
                    sum+=mat[k][x];
                    x--;
                }
                if(y<m)
                {
                    sum+=mat[k][y];
                    y++;
                }
            }
            x=j-1;
            y=j+1;
            for(int k=i+1;k<n;k++)
            {
                if(x>=0)
                {
                    sum+=mat[k][x];
                    x--;
                }
                if(y<m)
                {
                    sum+=mat[k][y];
                    y++;
                }
            }
            ans=max(ans,sum);
        }
    }

    cout<<ans<<'\n';
    
    }
    return 0;
}

