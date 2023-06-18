#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin,s);

    stringstream t(s);
    vector<string>words;

    string word;

    while(t>>word)
    {
        words.push_back(word);
    }
   
    for(auto& word:words)
    {
        reverse(word.begin(),word.end());
    }
    
    int i=0;
    for(i=0;i<words.size()-1;i++)
    {
        cout<<words[i]<<" ";
    }
    cout<<words[i];
    
    return 0;
}

