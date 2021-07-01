#include <bits/stdc++.h>

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int N; cin >> N;
    int a[N], b[N], c[N];
    for(int i = 0; i < N; ++i) {
        cin >> a[i] >> b[i] >> c[i];
    }
    int best = 0;
    for(int i = 1; i <= N; ++i) {
        int last = i, ans = 0;
        for(int i = 0; i < N; ++i) {
            if(a[i] == last) last = b[i];
            else if(b[i] == last) last = a[i];
            if(last == c[i]) ++ans;
        }
        best = max(best, ans);
    }
    cout << best << '\n';

    return 0;
}
