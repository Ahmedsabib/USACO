#include <bits/stdc++.h>

int in[101], out[101];

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n; cin >> n;
    for (int i = 0; i < n-1; ++i) {
        int a, b; cin >> a >> b;
        out[a]++;
        in[b]++;
    }
    int ans = -1;
    for (int i = 1; i <= n; ++i) {
        if (out[i] == 0 && ans != -1) {
            ans = -1;
            break;
        }
        if (out[i] == 0) {
            ans = i;
        }
    }
    cout << ans << '\n';
    
    return 0;
}
