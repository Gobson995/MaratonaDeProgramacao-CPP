#include <bits/stdc++.h>

using namespace std;

int main () {
    int n; cin >> n;

    int maxi = 0;
    int soma = 0;

    while (n--) {
        int a, b; cin >> a >> b;

        soma -= a;
        soma += b;

        maxi = max(maxi, soma);
    }

    cout << maxi << endl;
}