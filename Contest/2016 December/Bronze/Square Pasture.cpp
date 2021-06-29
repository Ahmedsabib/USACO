#include <bits/stdc++.h>

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
  
    int small_X = 10, small_Y = 10, largest_X = 0, largest_Y = 0;
    for(int i = 0; i < 2; ++i) {
        int low_x, low_y, high_x, high_y = 0;
        cin >> low_x >> low_y >> high_x >> high_y;
        if(small_Y > low_y) {
            small_Y = low_y;
        }
        if(largest_X < high_x) {
            largest_X = high_x;
        }
        if(small_X > low_x) {
            small_X = low_x;
        }
        if(largest_Y < high_y) {
            largest_Y = high_y;
        }
    }
    int ans = largest_X - small_X;
    if(largest_Y - small_Y > largest_X - small_X) {
        ans = largest_Y - small_Y;
    }
    cout << ans*ans << '\n';
    
    return 0;
}
