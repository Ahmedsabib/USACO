#include <bits/stdc++.h>

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    char arr[10][10];
    for(int i = 0; i < 10; ++i){
        for(int j = 0; j < 10; ++j){
            cin >> arr[i][j];
        }
    }
    int64_t rpos_row = -1, rpos_col = -1, lpos_row = -1, lpos_col = -1, bpos_row = -1, bpos_col = -1;
    for(int i = 0; i < 10; ++i){
        for(int j = 0; j < 10; ++j){
            if(arr[i][j] == 'R'){
                rpos_row = i+1;
                rpos_col = j+1;
            } else if(arr[i][j] == 'L'){
                lpos_row = i+1;
                lpos_col = j+1;
            } else if(arr[i][j] == 'B'){
                bpos_col = j+1;
                bpos_row = i+1;
            }
        }
    }
    int64_t distance_bl = abs(bpos_row-lpos_row)+abs(bpos_col-lpos_col);
    int64_t distance_rl = abs(rpos_row-lpos_row)+abs(rpos_col-lpos_col);
    int64_t distance_br = abs(bpos_row-rpos_row)+abs(bpos_col-rpos_col);
    if((bpos_row == lpos_row || bpos_col == lpos_col) && (distance_bl == distance_br+distance_rl)){
        cout << distance_bl+1 << '\n';
    } else{
        cout << distance_bl-1 << '\n';
    }
    
    return 0;
}
