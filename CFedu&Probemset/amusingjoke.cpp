#include <bits/stdc++.h>

using namespace std;

int main () {
    string a, b, c; cin >> a >> b >> c;

    for (int i = 0; i < b.size(); i++) {
        a.push_back(b[i]);
    }

    sort(a.begin(), a.end());
    sort(c.begin(), c.end());

    if (a == c) cout << "YES" << endl;
    else cout << "NO" << endl;
}