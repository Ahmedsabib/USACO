#include <bits/stdc++.h>

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int a, b; cin >> a >> b;
    int ans = 0, x = 1, dir = 1;
    while(1) {
    	if((dir == 1 && a <= b && b <= a+x) || (dir == -1 && b <= a && a-x <= b)) {
    		ans += abs(b - a);
    		cout << ans << '\n';
    		break;
    	} else {
    		ans += x*2;
    		x *= 2;
    		dir *= -1;
    	}
    }
    
    return 0;
}
