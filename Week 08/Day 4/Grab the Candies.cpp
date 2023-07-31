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
        int n;
        cin>>n;

        int bags[n];

        for(int i=0;i<n;i++)
        {
            cin>>bags[i];
        }

        int mihai=0;
        int bianca=0;

        for(int i=0;i<n;i++)
        {
            if(bags[i]%2==0)
            {
                mihai+=bags[i];
            }
            else
            {
                bianca+=bags[i];
            }
        }

        if(mihai>bianca)
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }
    }
    
    return 0;
}