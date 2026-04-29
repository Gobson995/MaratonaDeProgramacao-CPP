#include <bits/stdc++.h>

using namespace std;

int main () {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        bool resp = false;

        for (int i = 0; i < n; i++) {
            int x; cin >> x;

            if (x == 67) {
                resp = true;
            }
        }

        if (resp) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
}