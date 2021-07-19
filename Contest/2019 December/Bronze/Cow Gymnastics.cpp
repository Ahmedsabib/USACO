#include <bits/stdc++.h>

int N, M;
int mat[10][20];

bool check(int n, int m, int x) {
	int pos_a = -1, pos_b = -1;
	for (int i = 0; i < M; ++i) {
		if (mat[x][i] == n) pos_a = i;
		if (mat[x][i] == m) pos_b = i;
	}
	return pos_a < pos_b;
}

int64_t better(int x, int y) {
	int total = 0;
	for (int i = 0; i < N; ++i) {
		if (check(x, y, i)) {
			++total;
		}
	}
	return total;
}

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> N >> M;
    for (int i = 0; i < N; ++i) {
    	for (int j = 0; j < M; ++j) {
    		cin >> mat[i][j];
    	}
    }
    int ans = 0;
    for (int i = 1; i <= M; ++i) {
    	for (int j = 1; j <= M; ++j) {
    		if (better(i, j) == N) ++ans;
    	}
    }
    cout << ans << '\n';
    
    return 0;
}
