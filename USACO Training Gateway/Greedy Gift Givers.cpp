#include <bits/stdc++.h>

using namespace std;

int main() {
    int N; cin >> N;
    vector<string>A(N);
    vector<int>B(N, 0);
    for(int i = 0; i < N; ++i){
     cin >> A[i];
    }
    for(int i = 0; i < N; ++i){
     string S; cin >> S;
     int x, y; cin >> x >> y;
     if(x == 0 and y == 0) continue;
     int r = x%y, z = x/y;
     for(int j = 0; j < y; ++j){
      string W; cin >> W;
      for(int k = 0; k < N; ++k){
       if(W == A[k]) B[k] += z;
      }
     }
     for(int k = 0; k < N; ++k){
      if(S == A[k]){
       B[k] -= x;
       B[k] += r;
      }
     }
    }
    for(int i = 0; i < N; ++i){
     cout << A[i] << ' ' << B[i] << '\n';
    }
    return 0; 
}
