#include <bits/stdc++.h>

using namespace std;

int main () {
    int t; cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int>a(n);

        bool achou = false;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == k) achou = true;
        }

        if (achou) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}