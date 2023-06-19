#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k;
    cin >> n >> k;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 0;
    unordered_map<int, int> mp;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];

        if (sum == k)
        {
            ans = max(ans, i + 1);
        }
        if (mp.find(sum - k) != mp.end())
        {
            int index = mp[sum - k];
            ans = max(ans, i - index);
        }
        if (mp.find(sum) == mp.end())
        {
            mp[sum] = i;
        }
    }

    cout << ans << endl;

    return 0;
}