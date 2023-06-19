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

        int n, s, r;
        cin >> n >> s >> r;

        int mx = s - r;
        vector<int> ans;
        ans.push_back(mx);

        int x = r / (n - 1);
        int rem = r % (n - 1);

        for (int i = 0; i < n - 1; i++)
        {
            if (rem > 0)
                ans.push_back(x + 1);
            else
                ans.push_back(x);
            rem--;
        }

        for (auto it : ans)
        {
            cout << it << " ";
        }

        cout << '\n';
    }
    return 0;
}
