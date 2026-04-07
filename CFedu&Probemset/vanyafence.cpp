#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, h; cin >> n >> h;

    int largura = 0;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        if (x > h) largura += 2;
        else largura++;
    }

    cout << largura << endl;
}