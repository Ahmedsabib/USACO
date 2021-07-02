#include <bits/stdc++.h>

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int first_capacity, second_capacity, third_capacity, a, b, c;
    cin >> first_capacity >> a >> second_capacity >> b >> third_capacity >> c;
    for(int i = 1; i <= 100; ++i) {
    	if(i%3 == 1) {
    		int x = a+b;
	    	if(second_capacity < x) {
	    		b = second_capacity;
	    		a = x-b;
	    	}
	    	else {
	    		b = x;
	    		a = 0;
	    	}
    	}
    	else if(i%3 == 2) {
    		int y = b+c;
	    	if(third_capacity < y) {
	    		c = third_capacity;
	    		b = y-c;
	    	}
	    	else {
	    		c = y;
	    		b = 0;
	    	}
    	}
    	else {
    		int z = a+c;
	    	if(first_capacity < z) {
	    		a = first_capacity;
	    		c = z-a;
	    	}
	    	else {
	    		a = z;
	    		c = 0;
	    	}
    	}
    }
    cout << a << '\n';
    cout << b << '\n';
    cout << c << '\n';
    
    return 0;
}
