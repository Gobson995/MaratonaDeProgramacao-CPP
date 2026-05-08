#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;
    vector<int> a(1001, -1);

    for(int i = 1; i <= n; i++) {
      int x; cin >> x;
      a[x] = i;
    }

    int resp = -1;

    for(int x = 1; x <= 1000; x++) {
      for(int y = 1; y <= 1000; y++) {
        if (a[x] != -1 && a[y] != -1) {
          if (__gcd(x, y) == 1) {
            resp = max(resp, a[x] + a[y]);
          }
        }
      }
    }
    
    cout << resp << endl;
  }
}