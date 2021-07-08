#include <bits/stdc++.h>

int N;
int A[101], B[101], C[101], ans = 0, buckets = 0;

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> N;
    for (int i = 1; i <= N; ++i) {
        cin >> A[i] >> B[i] >> C[i];
    }
    ans = 0; 
    for (int j = 1; j <= 1000; ++j) {
        buckets = 0;
        for (int i = 1; i <= N; ++i) {
            if(A[i] <= j && j <= B[i]) {
                buckets += C[i];
            }
        }
        ans = max(ans, buckets);
    }
    cout << ans << '\n';
    
    return 0;
}
