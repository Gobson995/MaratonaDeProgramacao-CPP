#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main () {
    vector<int> x(4);

    for (int i = 0; i < 4; i++) cin >> x[i];

    sort(x.begin(), x.end());

    int total = x[3];

    int a = total - x[2];
    int b = total - x[1];
    int c = total - x[0];

    cout << a << " " << b << " " << c << endl;
}