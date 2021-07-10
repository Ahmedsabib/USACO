#include <bits/stdc++.h>

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int N; cin >> N;
    vector<int>answer(26);
    for (int i = 0; i < N; ++i) {
    	string a, b; cin >> a >> b;
    	auto check = [&](string s) {
    		vector<int> arr(26);
    		for (int j = 0; j < s.size(); ++j) {
    			int x = s[j]-'a';
    			arr[x]++;
    		}
    		return arr;
    	};
    	vector<int> A(26);
    	vector<int> B(26);
    	A = check(a);
    	B = check(b);
    	for (int j = 0; j < 26; ++j) {
    		if(A[j] > B[j]) {
    			answer[j] += A[j];
    		} else {
    			answer[j] += B[j];
    		}
    	}
    }
    for (int i = 0; i < 26; ++i) {
    	cout << answer[i] << '\n';
    }
    
    return 0;
}
