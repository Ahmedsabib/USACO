#include <bits/stdc++.h>
using namespace std;
const int maxn = 3001;
int n, m, nodes = 0;
vector<int> adj[maxn];
int order[maxn];
bool visited[maxn];
bool close[maxn];
void DFS(int node) {
  if (visited[node] || close[node]) {
    return;
  }
  ++nodes;
  visited[node] = true;
  for (auto& x: adj[node]) {
    if (!visited[x]) {
      DFS(x);
    }
  }
}
int main() {
  cin >> n >> m;
  for (int i = 0; i < m; ++i) {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  for (int i = 0; i < n; ++i) {
    cin >> order[i];
  }
  DFS(1);
  if (nodes == n) {
    cout << "YES" << '\n';
  }
  else {
    cout << "NO" << '\n';
  }
  for (int i = 0; i < n-1; ++i) {
    memset(visited, false, sizeof(visited));
    nodes = 0;
    close[order[i]] = true;
    DFS(order[n-1]);
    if (nodes == n-i-1) {
      cout << "YES" << '\n';
    }
    else {
      cout << "NO" << '\n';
    }
  }
}
