#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    int frq[26]={0};
    for(int i=0;i<n;i++)
    {
        char x;
        cin>>x;
        frq[x-'a']++;
    }
    
    for(int i=0;i<26;i++)
    {
        for(int j=0;j<frq[i];j++)
        {
            char y=i+'a';
            cout<<y;
        }
    }
    return 0;
}

