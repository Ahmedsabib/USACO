#include <bits/stdc++.h>

int n, m;
std::string a[100], b[100];

bool check(int x) {
    bool ok[2][4] = {0};
    for (int i = 0; i < n; ++i) {
        if (a[i][x] == 'A') ok[0][0] = true;
        if (a[i][x] == 'C') ok[0][1] = true;
        if (a[i][x] == 'G') ok[0][2] = true;
        if (a[i][x] == 'T') ok[0][3] = true;
    }
    for (int i = 0; i < n; ++i) {
        if (b[i][x] == 'A') ok[1][0] = true;
        if (b[i][x] == 'C') ok[1][1] = true;
        if (b[i][x] == 'G') ok[1][2] = true;
        if (b[i][x] == 'T') ok[1][3] = true;
    }
    for (int i = 0; i < 4; ++i) {
        if (ok[0][i] && ok[1][i]) return false;
    }
    return true;
}

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    int ans = 0;
    for (int i = 0; i < m; ++i) {
        if (check(i)) ++ans;
    }
    cout << ans << '\n';
    
    return 0;
}
