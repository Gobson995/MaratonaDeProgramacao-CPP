#include <bits/stdc++.h>

using namespace std;

int main () {
    int t; cin >> t;

    while (t--) {
        int soma = 0;

        vector<int> a(7);

        for (int i = 0; i < 7; i++) {
            cin >> a[i];
        }

        sort(a.begin(),a.end());

        for (int i = 0; i < 6; i++) {
            soma -= a[i];
        }

        soma += a[6];

        cout << soma << endl;
    }
}