#include <bits/stdc++.h>

using namespace std;

bool primo (int x) {
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }

    return true;
}

int main () {
    int n, m; cin >> n >> m;

    for (int i = n+1; i < 200; i++) {
        if (primo(i)) {
            if (i == m) cout << "YES" << endl;
            else cout << "NO" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}