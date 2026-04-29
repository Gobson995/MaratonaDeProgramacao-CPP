#include <bits/stdc++.h>

using namespace std;

int main () {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        vector<int> freq(n*n+1);

        for (int i = 0; i < n*n; i++) {
            int x; cin >> x;

            freq[x]++;
        }

        bool ok = true;

        for (int i = 1; i <= n*n; i++) {
            if (freq[i] > n*(n-1)) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO");

        cout << endl;
    }
}