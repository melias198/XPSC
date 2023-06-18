#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;

    string ans="";
    for(int i=0;i<s.size();i++)
    {
        if((i+1)%2!=0)
        {
            ans+=s[i];
        }
    }

    cout<<ans<<'\n';
    
    return 0;
}

