#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        string ans;
        int i=0,j=1;
        while(j<n)
        {
            char x=s[i];
            if(x==s[j])
            {
                ans.push_back(s[i]);
                i=j+1;
                j+=2;
            }
            else
            {
                j++;
            }
        }
        cout<<ans<<'\n';
    }
    
    return 0;
}