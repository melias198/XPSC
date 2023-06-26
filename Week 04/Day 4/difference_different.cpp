#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {

        int k, n;
        cin >> k >> n;
        int m=1,j=0;
        for(int i=1;i<=k;i++)
        {
            m+=j;
            if((n-m)<(k-i))
            {
                m-=j;
                m++;
                cout<<m<<" ";
            }
            else
            {
               cout<<m<<" ";
            }
            j++;
        }
        cout<<'\n';
    }
    return 0;
}