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

void solve(){
    int n;
    cin >> n;

     vector<int> v(n + 1);
    vector<int> freq(n + 2, 0); // Initialize frequency array

    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        freq[min(n + 1, v[i])]++; // Count frequencies
    }

    bool flag = true;

    for (int i = 1; i <= n; i++) {
        int cnt = n - i + 1; // Maximum possible count for values > i-1
        if (freq[i] != cnt) {
            flag = false;
            break;
        }
    }

    if (flag) cout << "YES" << '\n';
    else cout << "NO" << '\n';

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