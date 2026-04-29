#include <bits/stdc++.h>

using namespace std;

int main () {
    int a, b; cin >> a >> b;

    int dif = min(a, b);
    int iguais = abs(a - b)/2;
    cout << dif << " " << iguais << endl;
}