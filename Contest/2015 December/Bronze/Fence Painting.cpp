#include <bits/stdc++.h>

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int64_t a, b, c, d; cin >> a >> b >> c >> d;
    vector<bool> painted(100);
    for(int i = a; i < b; ++i) painted[i] = 1;
    for(int i = c; i < d; ++i) painted[i] = 1;
    int64_t ans = 0;
    for(int i = 0; i < 100; ++i) ans += painted[i];
    cout << ans << '\n';

    return 0;
}
