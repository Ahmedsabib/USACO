#include <bits/stdc++.h>

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int64_t a, b, c, d, e, f, g, h; cin >> a >> b >> c >> d >> e >> f >> g >> h;
    int64_t gold_to_platinum = h - g;
    int64_t silver_to_gold = f - e + h - g;
    int64_t bronze_to_silver = d - c + f - e + h - g;
    cout << bronze_to_silver << '\n';
    cout << silver_to_gold << '\n';
    cout << gold_to_platinum;

    return 0;
}
