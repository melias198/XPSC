#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b; cin>>a>>b;
    int ans=0;
    if(a>b)
    {
        ans=0;
    }
    else
    {
        for(int i=a;i<=b;i++)
        {
            ans++;
        }
    }

    cout<<ans;

    return 0;
}

