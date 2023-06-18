#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t,k; cin>>t>>k;
    int ans=0;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%k==0) ans++;
    }
    cout<<ans<<'\n';
    return 0;
}

