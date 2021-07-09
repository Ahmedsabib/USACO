#include <bits/stdc++.h> 

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int N; cin >> N; 
    int A[101], B[101];
    string S[101];
    for (int i = 0; i < N; ++i) {
    	cin >> S[i] >> A[i] >> B[i];
    }
    int a = -999999999, b = 999999999;
    for (int i = N-1; i >= 0; --i) {
    	if(S[i] == "none") {
    		a = max(a, A[i]);
    		b = min(b, B[i]);
    	}
    	if(S[i] == "off") {
    		a += A[i];
    		b += B[i];
    	}
    	if(S[i] == "on") {
    		a -= B[i];
    		b -= A[i];
    		a = max(0, a);
    	}
    }
    cout << a << ' ' << b << '\n';
    a = -999999999, b = 999999999;
    for (int i = 0; i < N; ++i) {
    	if(S[i] == "none") {
    		a = max(a, A[i]);
    		b = min(b, B[i]);
    	}
    	if(S[i] == "on") {
    		a += A[i];
    		b += B[i];
    	}
    	if(S[i] == "off") {	
    		a -= B[i];
    		b -= A[i];
    		a = max(0, a);
    	}
    }
    cout << a << ' ' << b << '\n';
    
    return 0;
}
