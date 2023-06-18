#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    getline(cin,s);
    stringstream t(s);
    string word;
    vector<string>str;
    while(t>>word)
    {
       str.push_back(word);
    }
    for(auto word:str)
    {
        cout<<word<<" ";
    }
    return 0;
}

