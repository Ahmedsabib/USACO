#include <bits/stdc++.h>

const int MAX = 2000;
int vis[MAX][MAX];

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    for(int i = 0; i < 3; ++i){
        int64_t a, b, c, d; cin >> a >> b >> c >> d;
        a += MAX /2;
        b += MAX /2;
        c += MAX /2;
        d += MAX /2;
        for(int j = a; j < c; ++j){
            for(int k = b; k < d; ++k){
                vis[j][k] = i < 2;
            }
        }
    }
    int64_t ans = 0;
    for(int i = 0; i < MAX; ++i){
        for(int j = 0; j < MAX; ++j){
            ans += vis[i][j];
        }
    }
    cout << ans << '\n';
    
    return 0;
}
