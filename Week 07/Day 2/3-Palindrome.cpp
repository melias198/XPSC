#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string ans="";
    for(int i=0;i<n;i++)
    {
        ans+='a';
    }

    for(int i=2;i<n;i+=4)
    {
        ans[i]='b';
        if(i+1<n) ans[i+1]='b';
    }

    cout<<ans<<'\n';
    return 0;
}
