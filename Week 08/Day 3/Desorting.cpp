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
    vector<int> nums(n);
    int diff = 1e9;
    bool sorted = true;
    for (int i = 0; i < n; i++) 
    {
        cin >> nums[i];
        if (i > 0) 
        {
            diff = min(nums[i] - nums[i - 1], diff);
            sorted &= nums[i] >= nums[i - 1];
        }
    }
        
    if (!sorted) 
    {
        cout << 0 << endl;
        return;
    }

    cout << diff/2 + 1 << endl;
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
