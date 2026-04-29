#include <bits/stdc++.h>

using namespace std;

int main () {
    int t; cin >> t;

    while (t--) {
        int k; cin >> k;

        int conta = 0;
        int n = 1;

        while (true) {
            if (n % 3 != 0 && n % 10 != 3) {
                conta++;
            }

            if (conta == k) {
                cout << n << endl;
                break;
            }

            n++;
        }
    }
}