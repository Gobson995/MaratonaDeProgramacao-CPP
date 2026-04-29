#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;

        deque<int> dq;
        for (int i = 1; i <= 3*n; i++) {
            dq.push_back(i);
        }

        vector<int> res;

        for (int i = 0; i < n; i++) {
            int small = dq.front(); dq.pop_front();
            int big = dq.back(); dq.pop_back();
            int mid = dq.back(); dq.pop_back();

            res.push_back(small);
            res.push_back(mid);
            res.push_back(big);
        }

        for (int x : res) cout << x << " ";
        cout << endl;
    }
}