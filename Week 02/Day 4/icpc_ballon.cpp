#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            char x;
            cin>>x;
            mp[x]++;
        }

        int ballons=0;
 
        for(auto it:mp)
        {
            if(it.second>1)
            {
                ballons+=it.second+1;
            }
            else if(it.second==1)
            {
                ballons+=2;
            }
        }
        cout<<ballons<<'\n';
    }
    return 0;
}

