#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    bool flag=false;
    for(int i=0;i<(1<<n);i++)
    {
        int ans=0;
        for(int j=0;j<n;j++)
        {
            if((i&(1<<j))!=0) ans+=v[j];
            else ans-=v[j];
        }

        if(ans%360==0)
        {
            flag=true;
            break;
        }
    }
    if(flag) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
    return 0;
}
