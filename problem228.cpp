#include <bits/stdc++.h>

using namespace std;

int main () {
    set<int> cores;

    for (int i = 0; i < 4; i++) {
        int x; cin >> x;

        cores.insert(x);
    }

    cout << 4 - cores.size() << endl;
}