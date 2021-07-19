#include <bits/stdc++.h>

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int a, b, c; cin >> a >> b >> c;
    int ans = 0;
    for (int i = 0; i*a <= c; ++i) {
        for (int j = 0; i*a+j*b <= c; ++j) {
            if (i*a+b*j > ans) {
                ans = i*a+b*j;
            }
        }
    }
    cout << ans << '\n';
    
    return 0;
}
