#include <bits/stdc++.h>

int cnt[100005];

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n; cin >> n;
    for (int i = 0; i < n-1; ++i) {
        int a, b; cin >> a >> b;
        cnt[a-1]++;
        cnt[b-1]++;
    }
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (ans < cnt[i]) {
            ans = cnt[i];
        }
    }
    cout << ans+1 << '\n';
    
    return 0;
}
