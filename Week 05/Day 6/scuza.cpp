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
    int n, q;
    cin >> n >> q;
    vector<long long> pref;
    pref.push_back(0);
    vector<int> prefmax;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pref.push_back(pref.back()+x);
        if(i == 0)
        {
            prefmax.push_back(x);
        }
        else
        {
            prefmax.push_back(max(prefmax.back(), x));
        }
    }
    for(int i = 0; i < q; i++)
    {
        int k;
        cin >> k;
        int ind = upper_bound(prefmax.begin(), prefmax.end(), k)-prefmax.begin();
        cout << pref[ind] << " ";
    }
    cout << endl;
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
