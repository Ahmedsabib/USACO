#include <bits/stdc++.h>

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int N, K; cin >> N >> K;
    vector<int> arr(N);
    for (auto& x: arr) cin >> x;
    sort(arr.begin(), arr.end());
    int ans = 0;
    for (int i = 0; i < N; ++i) {
        int cnt = 1;
        for (int j = i+1; j < N; ++j) {
            if (abs(arr[j]-arr[i]) <= K) ++cnt;
        }
        ans = max(cnt, ans);
    }
    cout << ans << '\n';
    
    return 0;
}
