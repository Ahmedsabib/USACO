#include <bits/stdc++.h>

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    string s; cin >> s;
    string t; cin >> t;
    string real = "abcdefghijklmnopqrstuvwxyz";
    map<char, int> mp;
    for(int i = 0; i < 26; ++i) {
        mp[s[i]] = i+1;
    }
    int ans = 1;
    int len = t.size();
    for(int i = 1; i < len; ++i) {
        if(mp[t[i]] <= mp[t[i-1]]) {
           ++ans; 
        }
    }
    cout << ans << '\n';
    
    return 0;
}
