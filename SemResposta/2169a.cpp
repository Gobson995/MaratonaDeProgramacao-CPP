#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  int tc; 
  cin >> tc;

  while (tc--) {
    int n, a;
    cin >> n >> a;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    vector<pair<int,int>> eventos;

    for (int x : v) {
      if (x < a) {
        int m = (x + a) / 2 + 1;
        eventos.push_back({m, +1});
      } 
      else if (x > a) {
        int r = (x + a - 1) / 2;
        eventos.push_back({0, +1});
        eventos.push_back({r + 1, -1});
      }
    }
    
    eventos.push_back({0, 0});

    sort(eventos.begin(), eventos.end(), [](auto &a, auto &b) {
        if (a.first == b.first) return a.second > b.second;
        return a.first < b.first;
    });

    int atual = 0, melhor = -1, resp = 0;

    for (int i = 0; i < eventos.size(); i++) {
        if (i > 0) {
            if (atual > melhor) {
                melhor = atual;
                resp = eventos[i-1].first;
            }
        }
        atual += eventos[i].second;
    }

    if (atual > melhor) {
        melhor = atual;
        resp = eventos.back().first;
    }

    cout << resp << endl;
  }
}