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
        int n;
        cin >> n;
        map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin>>s;
            mp[s]++;
        }

        int ans = 0;

        ans = max(ans, mp["A"] + mp["AB"]);
        ans = max(ans, mp["B"] + mp["AB"]);
        ans = max(ans, mp["O"] + mp["B"] + mp["AB"]);
        ans = max(ans, mp["O"] + mp["A"] + mp["AB"]);
        cout << ans << '\n';
    }
    return 0;
}
