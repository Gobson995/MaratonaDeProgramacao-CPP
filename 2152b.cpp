#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    long long n, rK, cK, rD, cD;
    cin >> n >> rK >> cK >> rD >> cD;

    long long max_survival = 0;

    if (rK > rD) {
        max_survival = max(max_survival, n - rD);
    }
    if (rK < rD) {
        max_survival = max(max_survival, rD);
    }
    if (cK > cD) {
        max_survival = max(max_survival, n - cD);
    }
    if (cK < cD) {
        max_survival = max(max_survival, cD);
    }

    cout << max_survival << "\n";
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}