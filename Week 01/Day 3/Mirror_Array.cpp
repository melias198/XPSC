#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m; cin>>n>>m;
    int matrix[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrix[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=m-1;j>=0;j--)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}

