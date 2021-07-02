#include <bits/stdc++.h>

int speedlimit[101], travelspeed[101];

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int N, M; cin >> N >> M;
    int x = 0;
    for(int i = 0; i < N; ++i) {
    	int a, b; cin >> a >> b;
    	for(int j = 0; j < a; ++j) {
    		speedlimit[x++] = b;
    	}
    }
    x = 0;
    for(int i = 0; i < M; ++i) {
    	int a, b; cin >> a >> b;
    	for(int j = 0; j < a; ++j) {
    		travelspeed[x++] = b;
    	}
    }
    int best = 0;
    for(int i = 0; i < 100; ++i) {
    	int diff = travelspeed[i] - speedlimit[i];
    	if(diff > best) {
    		best = diff;
    	}
    }
    cout << best << '\n';

    return 0;
}
