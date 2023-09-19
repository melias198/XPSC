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
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);

    int x = 0;
    int s[32] = {0};
    for (int &i : a)
    {
        cin >> i;
        x = x ^ i;
        for (int j = 0; j < 31; j++)
        {
            if ((1<<j)&i==1)
                s[j]++;
        }
    }

    for (int &i : b)
        cin >> i;

    if (n % 2 == 0)
    {
        for (int i = 0; i < 31; i++)
        {
            if (s[i] % 2 == 1)
            {
                for (int j : b)
                {
                    if ((1<<i)&j==1)
                    {
                        for (int k = 0; k < n; k++)
                        {
                            a[k] = a[k]|j;
                        }
                        break;
                    }
                }
            }
        }
        int y = 0;
        for (int i = 0; i < n; i++)
            y = y^a[i];

        cout << y << " " << x << endl;
    }
    else
    {
        for (int i = 0; i < 31; i++)
        {
            if (s[i] % 2 == 0)
            {
                for (int j : b)
                {
                    if ((1<<i)&j==1)
                    {
                        for (int k = 0; k < n; k++)
                        {
                            a[k] = a[k] | j;
                        }
                        break;
                    }
                }
            }
        }

        int y = 0;
        for (int i = 0; i < n; i++)
        {
            y = y ^ a[i];
        }

        cout << x << " " << y << endl;
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