#include <bits/stdc++.h>

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n; cin >> n;
    vector<int64_t> x(n);
    vector<int64_t> y(n);
    for (int i = 0; i < n; ++i) {
        cin >> x[i] >> y[i];
    }
    int64_t best = -1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                if (y[i] == y[j] && x[i] == x[k]) {
                    int64_t area = (x[j]-x[i])*(y[k]-y[i]);
                    if (area < 0) {
                        area *= -1;
                    }
                    if (best < area) {
                        best = area;
                    }
                }
            }
        }
    }
    cout << best << '\n';
  
    return 0;
}
