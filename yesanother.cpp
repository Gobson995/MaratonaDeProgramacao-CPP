#include <bits/stdc++.h>

using namespace std;

int main () {
    int t; cin >> t;

    while (t--) {
        int a, b; cin >> a >> b;

        int diff = abs(a - b);

        int resp = (diff + 9) / 10;

        cout << resp << endl;
    }
}