#include <bits/stdc++.h>

using namespace std;

int main () {
    int t; cin >> t;

    while(t--) {
        int n, x; cin >> n >> x;

        vector<int> a(n);

        for (int i = 0; i < n; i++) cin >> a[i];

        int resp = 0;

        resp = max(resp, a[0]);

        for (int i = 1; i < n; i++) {
            resp = max(resp, a[i] - a[i - 1]);
        }

        resp = max(resp, 2 * (x - a[n - 1]));

        cout << resp << endl;
    }
}