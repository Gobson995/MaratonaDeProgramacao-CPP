#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main() {
    int t; cin >> t;

    while (t--) {
        int k;
        cin >> k;

        int l = 1, r = 2e18, ans = -1;

        while (l <= r) {
            int mid = (l + r) / 2;

            int sq = sqrtl(mid);

            int on = mid - sq;

            if (on >= k) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        cout << ans << endl;
    }
}