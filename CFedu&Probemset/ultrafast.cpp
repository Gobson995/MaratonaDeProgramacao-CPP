#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    string resp = "";

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            resp += '1';
        } else {
            resp += '0';
        }
    }

    cout << resp << endl;
}