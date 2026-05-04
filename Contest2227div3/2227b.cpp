#include <bits/stdc++.h>

using namespace std;

int main () {
    int tc; cin >> tc;

    while (tc--) {
       int n; cin >> n;
        string s; cin >> s;

        int open = count(s.begin(), s.end(), '(');
        int close = n - open;

        if (open != close) {
            cout << "NO\n";
            continue;
        }

        int bal = 0;
        bool pref = false, suf = false;

        for (char c : s) {
            if (c == '(') bal++;
            else bal--;
            if (bal < 0) pref = true;
        }

        bal = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == ')') bal++;
            else bal--;
            if (bal < 0) suf = true;
        }

        if (pref && suf) cout << "YES\n";
        else {
            bal = 0;
            bool ok = true;
            for (char c : s) {
                if (c == '(') bal++;
                else bal--;
                if (bal < 0) ok = false;
            }
            cout << (ok ? "YES\n" : "NO\n");
        }
    }
}