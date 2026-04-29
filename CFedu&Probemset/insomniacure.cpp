#include <bits/stdc++.h>

using namespace std;

int main () {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    map<int, int> opa;

    for (int i = k; i <= d; i += k) {
        opa[i]++;
    }

    for (int i = l; i <= d; i += l) {
        opa[i]++;
    }

    for (int i = m; i <= d; i += m) {
        opa[i]++;
    }

    for (int i = n; i <= d; i += n) {
        opa[i]++;
    }

    cout << opa.size() << endl;
}   