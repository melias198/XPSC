#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;

    int sum=11;
    if(s.size()<2)
    {
        cout<<0<<'\n';
        return 0;
    }

    int cnt=0;
    while(sum>=10)
    {
        sum=0;
        for(int i=0;i<s.size();i++)
        {
            sum+=s[i]-'0';
        }
        s=to_string(sum);
        cnt++;
    }
    
    cout<<cnt<<'\n';

    return 0;
}

