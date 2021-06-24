#include <bits/stdc++.h>

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int64_t N, M; cin >> N >> M;
    int64_t cnt = 0, len = 0;
    for(int i = 0; i < N; ++i){
        string s; cin >> s;
        len = s.size();
        if(len + cnt > M){
            cout << '\n';
            cout << s;
            cnt = len;
        } else{
            if(cnt > 0) cout << ' ';
            cout << s;
            cnt += len;
        }
    }

    return 0;
}
