#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string num; cin>>num;
    int n=num.size();

    if(n==4)
    {
       cout<<num;
    }
    else
    {
        if(n==1) cout<<"000"<<num;
        if(n==2) cout<<"00"<<num;
        if(n==3) cout<<"0"<<num;
    }
    
    return 0;
}

