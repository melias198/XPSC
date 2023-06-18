#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;
    string s;
    while(n!=0)
    {
        s+=n%k+'0';
        n=n/k;
    }

    cout<<s.size();
    
    return 0;
}

