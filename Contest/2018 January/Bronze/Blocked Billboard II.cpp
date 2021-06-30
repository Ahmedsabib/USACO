#include <bits/stdc++.h>

bool okay(int x, int y, int x1, int y1, int x2, int y2) {

	return x >= x1 && x <= x2 && y >= y1 && y <= y2;
}

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    int cnt = 0;
    if(okay(x1, y1, x3, y3, x4, y4)) {
    	++cnt;
    }
    if(okay(x1, y2, x3, y3, x4, y4)) {
    	++cnt;
    }
    if(okay(x2, y1, x3, y3, x4, y4)) {
    	++cnt;
    }
    if(okay(x2, y2, x3, y3, x4, y4)) {
    	++cnt;
    }
    if(cnt < 2) {
    	cout << (x2-x1)*(y2-y1) << '\n';
    }
    else if(cnt == 4){
    	cout << 0 << '\n';
    }
    else {
    	int xlow = max(x1, x3);
    	int xlarge = min(x2, x4);
    	int ylow = max(y1, y3);
    	int ylarge = min(y2, y4);
    	cout << (x2-x1)*(y2-y1) - (xlarge - xlow)*(ylarge - ylow) << '\n';
    }
    
    return 0;
}
