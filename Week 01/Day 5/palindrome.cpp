#include <bits/stdc++.h>

using namespace std;

string remove_zero(string s)
{
    int i=0;
    while(s[i]=='0')
    {
        i++;
    }
    s.erase(0,i);
    return s;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str; cin>>str;
    string str2=str;

    reverse(str2.begin(),str2.end());

    string rev_str=remove_zero(str2);

    cout<<rev_str<<'\n';
    
    if(str==str2) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
    return 0;
}

