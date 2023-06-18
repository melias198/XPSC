#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;

    bool flag=true;

    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=false;
            break;
        }
    }

    if(flag) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
    
    return 0;
}

