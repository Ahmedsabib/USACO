#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
const int maxn = 201;
int n;
bool isconnected[maxn][maxn];
bool visited[maxn];
int dfs(int v) {
  visited[v] = true;
  int cnt = 0;
  for (int i = 0; i < n; ++i) {
    if (!isconnected[v][i] || visited[i]) {
      continue;
    }
    cnt += dfs(i)+1;
  }
  return cnt;
}
int main() {
  cin >> n;
  vector<int> a(n), b(n), c(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i] >> b[i] >> c[i];
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      int x = (a[i]-a[j])*(a[i]-a[j]) + (b[i]-b[j])*(b[i]-b[j]);
      int y = c[i]*c[i];
      if (x <= y) {
        isconnected[i][j] = true;
      }
    }
  }
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    memset(visited, false, sizeof(visited));
    int b = dfs(i)+1;
    ans = max(ans, b);
  }
  cout << ans << '\n';

}
