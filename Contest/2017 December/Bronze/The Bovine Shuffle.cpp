#include <bits/stdc++.h>

int original[100];

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int N; cin >> N;
    int A[N], B[N];
    for(int i = 1; i <= N; ++i) {
    	cin >> A[i];
    }
    for(int i = 1; i <= N; ++i) {
    	cin >> B[i];
    }
    for(int i = 0; i < 3; ++i) {
    	for(int i = 1; i <= N; ++i) original[i] = B[A[i]];
    	for(int i = 1; i <= N; ++i) B[i] = original[i];
    }
	for(int i = 1; i <= N; ++i) {
		cout << original[i] << '\n';
	}
    
    return 0;
}
