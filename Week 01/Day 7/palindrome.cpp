#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin>>s;
    string t=s;
    reverse(t.begin(),t.end());
    if(s==t)
    {
        cout<<"YES"<<'\n';
    }
    else
    {
        cout<<"NO"<<'\n';
    }
    return 0;
}

