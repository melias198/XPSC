#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int k,s;
    cin>>k>>s;
    int cnt=0;
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            int a = s - i - j;
            if (a >= 0 && a <= k)
            {
                cnt++;
            }
        }
    }
    cout<<cnt<<'\n';
    return 0;
}

