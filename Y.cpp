#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, n, m, k, x, y, operationType, mismatch;
    cin >> T;

    while (T--) {
        cin >> n >> m >> k >> x >> y;
        operationType = (x + y) % 2;
        mismatch = 0;

        for (int i = 0; i < k; i++) {
            cin >> x >> y;
            if (operationType == (x + y) % 2) {
                mismatch = 1;
            }
        }

        if (mismatch) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}
