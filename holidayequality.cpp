#include <bits/stdc++.h>

using namespace std;

int main () {
    int n; cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) cin >> a[i];

    int mx = *max_element(a.begin(), a.end());

    int resp = 0;

    for (int i = 0; i < n; i++) resp += (mx - a[i]);

    cout << resp << endl;
}