#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int count = 0;
        for (int i = 0; i < k; i++) {
            if (n >= pow(2, i)) {
                count++;
            }
            else {
                break;
            }
        }

        cout << count << endl;
    }

    return 0;
}
