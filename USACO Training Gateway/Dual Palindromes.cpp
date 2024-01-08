/*
ID: jakesnu1
PROG: dualpal
LANG: C++17
*/
#include <bits/stdc++.h>

using namespace std;

bool is_palindrome(string S) {
  for (int i = 0; i < (int)S.size()/2; ++i) {
    if (S[i] != S[(int)S.size() - 1 - i]) return 0;
  }
  return 1;
}

string check(int N, int M) {
  string res = "";
  while (M) {
    int rem = M%N;
    if (rem < 10) res += char(rem + '0');
    else res += char(rem - 10 + 'A');
    M /= N;
  }
  reverse(res.begin(), res.end());
  return res;
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  ifstream cin ("dualpal.in");
  ofstream cout ("dualpal.out");

  int N, S;
  cin >> N >> S;
  while (N) {
    S++;
    int ans = 0;
    for (int i = 2; i < 11; ++i) {
      if (is_palindrome(check(i, S))) ++ans;
    }
    if (ans > 1) {
      N--;
      cout << S << '\n';
    }
  }
  return 0;
}
