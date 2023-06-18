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
    int k; cin>>k;
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]==k)
            {
                flag=true;
                i=n+j;
                break;
            }
        }
    }
    if(flag) cout<<"will not take number"<<"\n";
    else cout<<"will take number"<<"\n";
    return 0;
}

