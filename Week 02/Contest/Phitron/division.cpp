#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tt; cin>>tt;
    while(tt--)
    {
        int n;
        cin>>n;
        if(n>=1900) cout<<"Division 1"<<'\n';
        else if(n>=1600 && n<=1899) cout<<"Division 2"<<'\n';
        else if(n>=1400 && n<=1599) cout<<"Division 3"<<'\n';
        else cout<<"Division 4"<<'\n';
    }
    return 0;
}

