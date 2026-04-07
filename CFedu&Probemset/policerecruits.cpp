#include <bits/stdc++.h>

using namespace std;

int main () {
    int n; cin >> n;

    int police = 0, resp = 0;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        if (x == -1) {
            if (police != 0) {
                police--;
            }
            else {
                resp++;
            }
        }
        else {
            police += x;
        }
    }

    cout << resp << endl;
}