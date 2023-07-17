/*
||-----------------------------------||
||           Mohammad Elias          ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
#define ll long long int
#define pub push_back
#define pob pop_back
#define PI 3.14159265359
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define cyes cout<<"Yes"<<endl
#define cno cout<<"No"<<endl
#define minus cout<<-1<<endl
using namespace std;
int row,coloum;



void solve()
{
    cin>>row>>coloum;
    int matrix[row][coloum];
    for(int i=0;i<row;i++)
    {
        string s;
        cin>>s;
        for(int j=0;j<coloum;j++)
        {
            if(s[j]=='.')
            {
                matrix[i][j]=0;
            }
            else if(s[j]=='*')
            {
                matrix[i][j]=1;
            }
            else
            {
                matrix[i][j]=2;
            }
        }
    }

    for(int j=0;j<coloum;j++)
    {
        int last=row-1;
        for(int i=row-1;i>=0;i--)
        {
            if(matrix[i][j]==2)
            {
                last=i-1;
            }
            else if(matrix[i][j]==1)
            {
                swap(matrix[last][j],matrix[i][j]);
                last--;
            }
        }
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<coloum;j++)
        {
            if(matrix[i][j]==0) cout<<".";
            else if(matrix[i][j]==1) cout<<"*";
            else cout<<"o";
        }
        cout<<endl;
    }
}

int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
