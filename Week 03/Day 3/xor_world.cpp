#include <bits/stdc++.h>

using namespace std;

long long calculate_XOR(long long n)
{
    if (n % 4 == 0)
        return n;
    if (n % 4 == 1)
        return 1;
    if (n % 4 == 2)
        return n + 1;
    return 0;
}

int main()
{
    long long a, b;
    cin >> a >> b;
    long long ans = calculate_XOR(a-1) ^ calculate_XOR(b);
    cout << ans << "\n";
    return 0;
}
