#include <bits/stdc++.h>

using namespace std;

int N, cnt[7], cur;
int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool leapyear(int y){
	if(y%100 == 0){
		return (y%400 == 0);
	}
	else{
		return (y%4 == 0);
	}
}

int main() { 
	cin >> N;
	cur = 0;
	for(int i = 1900; i <= (1900+N-1); ++i){
		for(int j = 0; j < 12; ++j){
			cnt[(cur+12)%7]++;
			if(j == 1){
				if(leapyear(i)){
					cur = (cur+month[j]+1)%7;
				}else{
					cur = (cur+month[j])%7;
				}
			}else{
				cur = (cur+month[j])%7;
			}
		}
	}
	for(int i = 5; i < 7; ++i) cout << cnt[i] << ' ';
	for(int i = 0; i < 5; ++i){
		if(i == 4) cout << cnt[i];
		else cout << cnt[i] << ' ';
	}
	cout << '\n';
    return 0; 
}
