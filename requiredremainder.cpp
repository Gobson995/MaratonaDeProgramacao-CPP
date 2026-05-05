#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main () {
    int t; cin >> t;

    while (t--) {
        int x, y, n;
        cin >> x >> y >> n;

        int k = n - (n % x) + y;

        if (k > n) k -= x;

        cout << k << endl;
    }
}