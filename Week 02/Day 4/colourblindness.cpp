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
        string s1;
        string s2;
        cin>>s1>>s2;
        bool flag = true;
        for(int i=0;i<n;i++)
        {
            if(s1[i]==s2[i]) flag=true;
            else if(s1[i]=='G' && s2[i]=='B') flag=true;
            else if(s1[i]=='B' && s2[i]=='G') flag=true;
            else
            {
                flag = false;
                break;
            } 
        }
        if(flag) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}

