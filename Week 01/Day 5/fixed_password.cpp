#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string pass="1999";
    for(int i=0;i<10000;i++)
    {
        string txt;
        cin>>txt;
        if(txt==pass)
        {
            cout<<"Correct"<<'\n';
            break;
        }
        else cout<<"Wrong"<<'\n';
    }
   
    return 0;
}

