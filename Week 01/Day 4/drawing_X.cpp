#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    int x=n/2;
    if(n%2==1) x=x+1;
    else x=x;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==x && j==x) cout<<"X";
            else if(i==j && i!=x) cout<<"\\";
            else if(j==(n+1-i) && j!=x) cout<<"/";
            else cout<<"*";
        }
        cout<<'\n';
    }
    return 0;
}

