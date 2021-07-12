#include <bits/stdc++.h>

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    string S, T; cin >> S >> T;
    string ans;
    for (int i = 0; i < S.size(); ++i) {
    	ans += S[i];
    	if (ans.size() >= T.size() && ans.substr(ans.size()-T.size()) == T) {
    		ans.resize(ans.size() - T.size());
    	}
    }
    cout << ans << '\n';
    
    return 0;
}
