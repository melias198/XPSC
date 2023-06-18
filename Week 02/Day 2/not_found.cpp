#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string alphabet="abcdefghijklmnopqrstuvwxyz";
    string s; cin>>s;
    map<char,int>mp;

    for(int i=0;i<s.size();i++)
    {
        char x=s[i];
        mp[x]++;
    }
    
    bool flag=true;
    for(int i=0;i<26;i++)
    {
        char ch=alphabet[i];
        if(mp[ch]==0)
        {
            cout<<ch<<'\n';
            flag=false;
            break;
        }
    }

    if(flag) cout<<"None"<<'\n';
    
    return 0;
}

