#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    // encontrar maior (primeira ocorrência)
    int max_val = -1, max_pos = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > max_val) {
            max_val = a[i];
            max_pos = i;
        }
    }

    // encontrar menor (última ocorrência)
    int min_val = 101, min_pos = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] <= min_val) {
            min_val = a[i];
            min_pos = i;
        }
    }

    int moves = max_pos + (n - 1 - min_pos);

    // ajuste se cruzarem
    if (max_pos > min_pos) {
        moves--;
    }

    cout << moves << endl;

    return 0;
}