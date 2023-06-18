#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        int s1=0,s2=0;
        for(int i=0;i<n;i++)
        {
            if(i<3)
            {
                s1+=s[i]-'0';
            }
            else
            {
                s2+=s[i]-'0';
            }
        }
        if(s1==s2) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';

    }
    return 0;
}

