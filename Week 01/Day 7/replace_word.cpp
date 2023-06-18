#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string str; cin>>str;
   
    
    while(str.find("EGYPT")!=string::npos)
    {
      str.replace(str.find("EGYPT"),5," ");
    }

    cout<<str;
    
    return 0;
}

