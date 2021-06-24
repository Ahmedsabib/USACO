#include <bits/stdc++.h>

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int64_t N; cin >> N;
    vector<int64_t> arr(N);
    for(int i = 0; i < N; ++i){
        cin >> arr[i];
    }
    int64_t ans = 0;
    for(int i = 0; i < N; ++i){
        for(int j = i; j < N; ++j){
            int64_t total = 0;
            for(int k = i; k <= j; ++k){
                total += arr[k];
            }
            bool okay = true;
            for(int k = i; k <= j; ++k){
                if(arr[k]*(j-i+1) == total){
                    okay = false;
                }
            }
            if(!okay){
                ++ans;
            }
        }
    }
    cout << ans << '\n';
    
    return 0;
}
