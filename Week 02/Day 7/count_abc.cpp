#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    string s; cin>>s;
    int cnt=0;

    for(int i=0;i<=n-3;i++)
    {
        if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='C') cnt++;
    }

    cout<<cnt<<'\n';
    
    return 0;
}

