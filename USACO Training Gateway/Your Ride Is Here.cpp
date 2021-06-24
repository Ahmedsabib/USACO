#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  string S, W; cin >> S >> W;
  long long prod1 = 0, prod2 = 0;
  for(int i = 0; i < S.size(); ++i){
    int val = S[i]-64;
    prod1 *= val;
  }
  for(int i = 0; i < W.size(); ++i){
    int val = W[i]-64;
    prod2 *= val;
  }
  if(prod1%47 == prod2%47) cout << "GO" << '\n';
  else cout << "STAY" << '\n';
  return 0;
} 
