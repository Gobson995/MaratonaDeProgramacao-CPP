#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        string a, b;
        cin >> a >> b;

        int totalOpen = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == '(') totalOpen++;
            if (b[i] == '(') totalOpen++;
        }

        if (totalOpen != n) {
            cout << "NO\n";
            continue;
        }

        int balance = 0;
        bool ok = true;

        for (int i = 0; i < n; i++) {
            if (a[i] == '(' && b[i] == '(') {
                balance += 2;
            } else if (a[i] == ')' && b[i] == ')') {
                balance -= 2;
            }

            if (balance < 0) {
                ok = false;
                break;
            }
        }

        if (balance != 0) ok = false;

        cout << (ok ? "YES\n" : "NO\n");
    }
}