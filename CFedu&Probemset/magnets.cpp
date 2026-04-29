#include <bits/stdc++.h>

using namespace std;

int main () {
    int n; cin >> n;

    int x; cin >> x;

    int resp = 1;

    for (int i = 0; i < (n-1); i++) {
        int opa; cin >> opa;

        if (opa != x) {
            resp++;
            x = opa;
        }
    }

    cout << resp << endl;
}