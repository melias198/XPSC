#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long ans = 0, len = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= q)
            {
                len++;
            }
            else
            {
                len = 0;
            }
            if (len >= k)
            {
                ans += (len - k + 1);
            }
        }
        cout << ans <<"\n";
    }
    return 0;
}
