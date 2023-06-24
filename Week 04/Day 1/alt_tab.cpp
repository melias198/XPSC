#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;

    stack<string>st;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        st.push(s);
    }

    unordered_set<string>str;
    while(!st.empty())
    {
        string ans=st.top();
        if(str.find(ans)==str.end())
        {
            str.insert(ans);
            int len=ans.size()-1;
            cout<<ans[len-1]<<ans[len];
        }
        st.pop();
    }

    cout<<'\n';

    return 0;
}
