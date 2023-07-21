#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int cnt=0;
    //cnt=(1<<3);
    while(n)
    {
        cnt++;
        n=n/2;
    }
    cout<<cnt<<'\n';
    return 0;
}
