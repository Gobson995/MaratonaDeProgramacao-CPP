#include <bits/stdc++.h>

using namespace std;

int main () {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        string a; cin >> a;

        map<int, int> freq;

        int pos = 1;

        freq[pos]++;

        for (int i = 0; i < n; i++) {
            if (a[pos - 1] == 'R') {
                pos++;
            }
            else {
                pos--;
            }

            freq[pos]++;
        }

        cout << freq.size() << endl;
    }
}