#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    int n=s.size();
    map<char,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
    }

    int cnt=0;
    char mid;
    for(auto it:mp)
    {
        if(it.second&1) 
        {
            cnt++;
            mid=it.first;
            it.second--;
        }
    }

    if(cnt>=2) 
    {
        cout<<"NO SOLUTION"<<'\n';
    }
    else
    {

    }

    return 0;
}