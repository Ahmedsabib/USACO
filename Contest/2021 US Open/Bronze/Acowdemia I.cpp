#include <bits/stdc++.h>

int64_t h_index(std::vector<int64_t>arr){

    int64_t h = arr.size();
    while(h > 0 && arr[h-1] < h){
        --h;
    }
    return h;
}

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int64_t N, M; cin >> N >> M;
    vector<int64_t> arr(N);
    for(auto& x: arr){
        cin >> x;
    }
    sort(arr.rbegin(), arr.rend());
    int64_t h = h_index(arr);
    if(h != N){
        for(int i = h; i >= 0 && i > h-M; --i) {
            arr[i]++;
        }
    }
    sort(arr.rbegin(), arr.rend());
    cout << h_index(arr) << '\n';

    return 0;
}
