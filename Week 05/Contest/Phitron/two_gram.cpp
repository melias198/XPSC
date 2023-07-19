#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<string,int>mp;
    for(int i=0;i<n-1;i++)
    {
      string ans;
      ans+=s[i];
      ans+=s[i+1];
      mp[ans]++;
    }
    
    int ans=0;
    string st;
    for(auto it:mp)
    {
      if(it.second>ans)
      {
        st=it.first;
        ans=it.second;
      }
    }
    
    cout<<st<<"\n";
    
    return 0;
}