#include <bits/stdc++.h>

using namespace std;

int main () {
    int n; cin >> n;

    vector <int> a(n);

    for (int i = 0; i < n; i++) cin >> a[i];

    int l = 0, r = n -1;

    int sereja = 0, dima = 0;
    bool turnosereja = true;

    while (l <= r) {
        int escolhido;

        if (a[l] > a[r]) {
            escolhido = a[l];
            l++;
        }
        else {
            escolhido = a[r];
            r--;
        }

        if (turnosereja) {
            sereja += escolhido;
        }
        else {
            dima += escolhido;
        }

        turnosereja = !turnosereja;
    }

    cout << sereja << " " << dima << endl;
}