#include <bits/stdc++.h>

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
  
    int N, M, K; cin >> N >> M >> K;
    for(int i = 0; i < N; ++i) {
    	string s; cin >> s;
    	string t;
    	for(int j = 0; j < M; ++j) {
    		if(s[j] == 'X' || s[j] == '.') {
    			for(int k = 0; k < K; ++k) {
    				t += s[j];
    			}
    		}
    	}
    	for(int j = 0; j < K; ++j) {
    		cout << t << '\n';
    	}
    }
    
    return 0;
}
