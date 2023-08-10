#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    long long k;

    cin >> n >> k;

    deque<int> q;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        q.push_back(x);
    }

    if (k >= n)
    {
        cout << n;
        return 0;
    }

    int cnt = 0;
    while (true)
    {
        int x = q.front();
        q.pop_front();

        auto p=q.begin();
        while (p != q.end() && x > *p)
        {
            cnt++;
            p++;
        }

        if (cnt >= k)
        {
            cout << x;
            return 0;
        }

        cnt = 1;
        q.push_back(x);
    }

    return 0;
}