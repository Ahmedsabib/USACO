#include <bits/stdc++.h>

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int N; cin >> N;
    int arr[N];
    for (int i = 0; i < N; ++i) {
    	cin >> arr[i];
    }
    int ans = N*N*100;
    for (int i = 0; i < N; ++i) {
    	int cnt = 0;
    	for(int j = 0; j < N; ++j) {
    		cnt += j*arr[(i+j)%N];
    	}
    	ans = min(ans, cnt);
    }
    cout << ans << '\n';
    
    return 0;
}
