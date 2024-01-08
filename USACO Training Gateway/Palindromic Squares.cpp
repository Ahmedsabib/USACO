/*
ID: jakesnu1
PROG: palsquare
LANG: C++17
*/
#include <bits/stdc++.h>

using namespace std;

int N;

bool is_palindrome(string S) {
  for (int i = 0; i < (int)S.size()/2; ++i) {
    if (S[i] != S[(int)S.size() - 1 - i]) return 0;
  }
  return 1;
}

string check(int M) {
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

  ifstream cin ("palsquare.in");
  ofstream cout ("palsquare.out");

  cin >> N;
  for (int i = 1; i <= 301; ++i) {
    if (is_palindrome(check(i * i))) {
      cout << check(i) << ' ' << check(i * i) << '\n';
    }
  }
  return 0;
}
