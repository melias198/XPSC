#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b; cin>>a>>b;
    int coin1=0,coin2=0,coin3=0;

    coin1=a+a-1; coin2=a+b; coin3=b+b-1;

    int ans=max({coin1,coin2,coin3});

    cout<<ans;
    
    return 0;
}

