#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N = 2e5 + 5;

ll t, n, m;

ll check(ll a, ll b) {
  if (a == b) return 0;
  else if (a > b) {
    ll is_odd = a%2;
    return 1 + is_odd + check((a + is_odd)/2, b);
  }
  else {
    ll is_odd = b%2;
    return min(b - a, 1 + is_odd + check(a, b/2));
  }
}

int main() {
  scanf("%lld", &t);
  while (t--) {
    scanf("%lld %lld", &n, &m);
    printf("%lld\n", check(n, m));
  }
  return 0;
}
