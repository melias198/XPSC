#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<string>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    vector<string>s;
    for(auto str:v)
    {
        auto it=find(s.begin(),s.end(),str);
        if(it!=s.end())
        {
            s.erase(it);
        }
        s.push_back(str);
    }

    string ans;
    for(auto it:s)
    {
        string temp=it.substr(it.length()-2);
       // reverse(temp.begin(),temp.end());
        ans+=temp[1];
        ans+=temp[0];
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;

    return 0;
}
