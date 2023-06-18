#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }
        int ans = 0;
        for (int i = 1; i < 4; i++)
        {
            if (arr[i] > arr[0])
                ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}