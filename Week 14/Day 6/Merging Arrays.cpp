#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    vector<int> ans(n + m);

    int i = 0, j = 0;
    while (i < n || j < m)
    {
        if ((j == m or i < n) and a[i] < b[j])
        {
            ans[i + j] = a[i];
            i++;
        }
        else
        {
            ans[i + j] = b[j];
            j++;
        }
    }

    for (auto it : ans)
        cout << it << " ";
    cout << endl;

    return 0;
}