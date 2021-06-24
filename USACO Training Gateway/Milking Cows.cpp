#include <bits/stdc++.h>

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int N; cin >> N;
    vector<pair<int, int>>A(N), v;
    for(int i = 0; i < N; ++i){
    	cin >> A[i].first >> A[i].second;
    }
    sort(A.begin(), A.end());
    for(int i = 0; i < N; ++i){
    	pair<int, int> x = A[i];
    	while(i < N-1 && A[i+1].first <= x.second){
    		++i;
    		x.second = max(x.second, A[i].second);
    	}
    	v.push_back(x);
    }
    int a = 0, b = 0;
    for(int i = 0; i < v.size(); ++i){
    	a = max(a, v[i].second - v[i].first);
    }
    for(int i = 0; i < v.size()-1; ++i){
    	b = max(b, v[i+1].first - v[i].second);
    }
    cout << a << ' ' << b << '\n';
    
    return 0;
}
