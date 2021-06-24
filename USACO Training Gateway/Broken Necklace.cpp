#include <bits/stdc++.h>

using namespace std;

int main() {
   int N; cin >> N;
   string S; cin >> S;
   S += S;
   int state, maxi = 0, current, j;
   for(int i = 0; i < N; ++i){
    char c = (char)S[i];
    if(c == 'w'){
     state = 0;
    }
    else{
     state = 1;
    }
    j = i;
    current = 0;
    while(state <= 2){
     while(j < N+i and (S[j] == c  or S[j] == 'w')){
      ++j;
      ++current;
     }
     state++;
     c = S[j];
    }
    if(maxi < current){
     maxi = current;
    }
   }
   cout << maxi << '\n';
   return 0;
}
