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
        long long n;
        cin>>n;
        map<string,long long>mp;
        long long ans=0;
        for(long long i=0;i<n;i++)
        {
            string s;
            cin>>s;
            string temp=s;
            for(char ch='a';ch<='z';ch++)
            {
                if(ch!=s[0])
                {
                    temp[0]=ch;
                    ans+=mp[temp];
                }
            }
            temp=s;
            for(char ch='a';ch<='z';ch++)
            {
                if(ch!=s[1])
                {
                    temp[1]=ch;
                    ans+=mp[temp];
                }
            }
            mp[s]++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}

