#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, k; cin >> n >> k;

    int tempo = 240 - k;
    int soma = 0;
    int resolvidos = 0;

    for (int i = 1; i <= n; i++) {
        soma += 5 * i;

        if (soma <= tempo) {
            resolvidos++;
        }
        else break;
    }

    cout << resolvidos << endl;
}