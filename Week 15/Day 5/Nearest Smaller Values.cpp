#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
	stack<pair<int, int>> stack;
	stack.push({0, 0});

	for (int i = 1; i <= n; i++) 
    {
		int a;
		cin >> a;
		while (!stack.empty() && stack.top().first >= a) stack.pop();
		cout << stack.top().second << " ";
		stack.push({a, i});
	}

    return 0;
}