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

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n + 1);
    v[1] = 1;
    int val = 2;
    int mul = 3;
    int index = 2;

    while (index <= n)
    {
        if (index % 2 == 0)
        {
            v[index] = val;
            val += 1;
        }
        else
        {
            v[index] = mul;
            mul += 1;
        }
        index++;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << v[i] << " ";
    }
    cout << '\n';
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