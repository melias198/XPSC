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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if ((b > a && d > c && c > a && d > b) ||
            (a > c && b > d && d > c && b > a) ||
            (c > d && a > b && b > d && a > c) ||
            (d > b && c > a && a > b && c > d))
        {
            cout << "YES" << '\n';
        }
        else
            cout << "NO" << '\n';
    }
    return 0;
}
