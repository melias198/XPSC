#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    int arr[n];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int i = 0, j = 0;
    ll sum = 0;

    while (j < n)
    {
        sum = sum + arr[j];
        if (sum > k)
        {
            while (sum > k)
            {
                sum = sum - arr[i];
                i++;
            }
        }
        if (sum == k)
        {
            ans = max(ans, j - i + 1);
        }
        j++;
    }

    cout << ans << endl;

    return 0;
}