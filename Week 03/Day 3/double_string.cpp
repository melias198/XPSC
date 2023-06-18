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
        map<string, int> st;
        vector<string> s(n);
        for (int i = 0; i < n; i++)
        {
            string a;
            cin >> a;
            s[i] = a;
            st[a]++;
        }

        string ans = "";

        for (int i = 0; i < n; i++)
        {
            bool flag = false;
            string curr = s[i];
            int len = curr.length();

            for (int j = 1; j < len; j++)
            {
                string part1 = curr.substr(0, j);
                string part2 = curr.substr(j);

                if (st[part1] >= 1 && st[part2] >= 1)
                {
                    flag = true;
                    break;
                }
            }
            ans += (flag ? '1' : '0');
        }
        cout << ans << '\n';
    }
    return 0;
}
