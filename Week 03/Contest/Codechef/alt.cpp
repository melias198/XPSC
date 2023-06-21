#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    unordered_set<string> uniqueStrings;
    vector<string> s;
    s.reserve(n);

    for (const auto& str : v) {
        if (uniqueStrings.find(str) == uniqueStrings.end()) {
            s.push_back(str);
            uniqueStrings.insert(str);
        }
    }

    stringstream ss;
    for (auto it = s.rbegin(); it != s.rend(); ++it) {
        string temp = it->substr(it->length() - 2);
        reverse(temp.begin(), temp.end());
        ss << temp;
    }

    string ans = ss.str();
    reverse(ans.begin(), ans.end());
    cout << ans;

    return 0;
}
