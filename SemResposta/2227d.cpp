#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        vector<int> a(2*n);

        for (int i = 0; i < 2*n; i++) cin >> a[i];

        vector<int> L(n, -1), R(n, -1);

        for (int i = 0; i < 2*n; i++) {
            if (L[a[i]] == -1) L[a[i]] = i;
            else R[a[i]] = i;
        }

        int l = 2*n, r = -1;
        int ans = 0;

        for (int k = 0; k < n; k++) {
            l = min(l, L[k]);
            r = max(r, R[k]);

            bool ok = true;

            for (int x = 0; x <= k; x++) {
                if (L[x] + R[x] != l + r) {
                    ok = false;
                    break;
                }
            }

            if (ok) ans = k + 1;
            else break;
        }

        cout << ans << '\n';
    }
}