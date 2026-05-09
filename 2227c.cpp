#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> div6, even, div3, other;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x % 6 == 0) div6.push_back(x);
            else if (x % 2 == 0) even.push_back(x);
            else if (x % 3 == 0) div3.push_back(x);
            else other.push_back(x);
        }

        for (auto x : div6) cout << x << " ";
        for (auto x : even) cout << x << " ";
        for (auto x : other) cout << x << " ";
        for (auto x : div3) cout << x << " ";

        cout << endl;
    }
}