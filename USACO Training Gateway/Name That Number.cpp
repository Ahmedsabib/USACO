/*
ID: jakesnu1
PROG: namenum
LANG: C++17
*/
#include <bits/stdc++.h>

using namespace std;

int alpha[] = {2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};

string check(string S) {
  string T = "";
  for (int i = 0; i < (int)S.size(); ++i) {
    T += char(alpha[S[i] - 'A'] + '0');
  }
  return T;
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  ifstream cin ("namenum.in");
  ifstream fin ("dict.txt");
  ofstream cout ("namenum.out");

  string S, T;
  cin >> S;
  int cnt = 0;
  while (fin >> T) {
    if (check(T) == S) {
      cout << T << '\n';
      ++cnt;
    }
  }
  if (cnt == 0) cout << "NONE\n";
  return 0;
}
