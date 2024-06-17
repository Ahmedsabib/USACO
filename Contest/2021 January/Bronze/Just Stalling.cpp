#include <bits/stdc++.h>

using namespace std;

#define int long long

int32_t main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int n;
  cin >> n;
  vector<int> a(n), b(n);
  for (int i = 0; i < n; ++i) cin >> a[i];
  for (int i = 0; i < n; ++i) cin >> b[i];
  sort(a.begin(), a.end());  
  sort(b.begin(), b.end());  
  int j = n - 1, ans = 1;
  for (int i = n - 1; i >= 1; --i) {
    while (j >= 0 && a[i] <= b[j]) --j;
    ans *= i - j;
  }
  cout << ans << '\n';
  return 0;
}
