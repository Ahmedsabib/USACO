#include <bits/stdc++.h>

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    vector<int64_t> arr(7);
    for(int i = 0; i < 7; ++i){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int64_t first = arr[0], second = arr[1];
    int64_t cnt = 0, third = 0;
    for(int i = 2; i < 7; ++i){
        if(!cnt && arr[i] == first+second){
            ++cnt;
            continue;
        } else{
            third = arr[i];
            break;
        }
    }
    cout << first << ' ' << second << ' ' << third;

    return 0;
}
