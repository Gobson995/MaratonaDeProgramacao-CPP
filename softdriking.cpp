#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int bebida = (k * l) / nl;
    int limao = c * d;
    int sal = p / np;

    int total = min({bebida, limao, sal});

    cout << total / n << endl;
}