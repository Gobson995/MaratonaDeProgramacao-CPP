#include <bits/stdc++.h>

using namespace std;

int main () {
    int n; cin >> n;

    vector<bool> passou (n+1, false);

    int p; cin >> p;

    for (int i = 0; i < p; i++) {
        int x; cin >> x;
        passou[x] = true;
    }

    int q; cin >> q;

    for (int i = 0; i < q; i++) {
        int x; cin >> x;
        passou[x] = true;
    }

    for (int i = 1; i <= n; i++) {
        if (!passou[i]) {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }

    cout << "I become the guy." << endl;
    return 0;
}