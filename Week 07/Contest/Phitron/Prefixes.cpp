#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<n;i+=2)
    {
        if(s[i]==s[i+1])
        {
            if(s[i]=='a')
            {
                s[i]='b';
            }
            else 
            {
                s[i]='a';
            }
            cnt++;
        }
    }
    cout<<cnt<<'\n'<<s<<'\n';
    return 0;
}
