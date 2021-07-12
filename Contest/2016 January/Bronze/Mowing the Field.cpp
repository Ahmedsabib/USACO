#include <bits/stdc++.h>

int vis[2001][2001];

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int N; cin >> N;
    for (int i = 0; i < 2001; ++i) {
    	for (int j = 0; j < 2001; ++j) {
    		vis[i][j] = -1;
    	}
    }
    int x = 1000, y = 1000;
    vis[x][y] = 0;
    int cur = 0;
    int ans = 100*10 +1;
    for (int i = 0; i < N; ++i) {
    	char s; cin >> s;
    	int dx = 0, dy = 0;
    	if (s == 'N') dx = -1;
    	else if (s == 'S') dx = 1;
    	else if (s == 'W') dy = -1;
    	else dy = 1;
    	int a; cin >> a;
    	for (int j = 1; j <= a; ++j) {
    		x += dx;
    		y += dy;
    		++cur;
    		if (vis[x][y] >= 0 && cur-vis[x][y] < ans) {
    			ans = cur - vis[x][y];
    		}
    		vis[x][y] = cur;
    	}
    }
    if (ans == 1001) {
    	ans = -1;
    }
    cout << ans << '\n';
    
    return 0;
}
