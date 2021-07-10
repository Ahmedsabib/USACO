#include <bits/stdc++.h>

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    char B[3][3];
    for (int i = 0; i < 3; ++i) {
    	for (int j = 0; j < 3; ++j) {
    		cin >> B[i][j];
    	}
    }
    int individual = 0, team = 0;
    for (char ch = 'A'; ch <= 'Z'; ++ch) {
    	auto individual_wins = [&](char ch) {
			if (B[0][0] == ch && B[1][1] == ch && B[2][2] == ch) return 1;
		  	if (B[0][2] == ch && B[1][1] == ch && B[2][0] == ch) return 1;
		  	for (int i=0; i<3; i++) {
		  		if (B[0][i] == ch && B[1][i] == ch && B[2][i] == ch) return 1;
		  		if (B[i][0] == ch && B[i][1] == ch && B[i][2] == ch) return 1;
		  	}
		  	return 0; 
		};
    	individual += individual_wins(ch);
    }
    for (char ch1 = 'A'; ch1 <= 'Z'; ++ch1) {
    	for (char ch2 = ch1+1; ch2 <= 'Z'; ++ch2) {
    		auto check = [&](char c1, char c2, char a, char b, char c)-> bool {
		    	if (a != ch1 && a != ch2) return false;
				if (b != ch1 && b != ch2) return false;
				if (c != ch1 && c != ch2) return false;
				if (a != ch1 && b != ch1 && c != ch1) return false;
				if (a != ch2 && b != ch2 && c != ch2) return false;
				return true;
		    };
		    auto team_wins = [&](char ch1, char ch2)-> int {
		    	if (check(ch1, ch2, B[0][0], B[1][1], B[2][2])) return 1;
				if (check(ch1, ch2, B[0][2], B[1][1], B[2][0])) return 1;
				for (int i = 0; i < 3; i++) {
					if (check(ch1, ch2, B[0][i], B[1][i], B[2][i])) return 1;
					if (check(ch1, ch2, B[i][0], B[i][1], B[i][2])) return 1;
				}
				return 0;
		    };
    		team += team_wins(ch1, ch2);
    	}
    }
    cout << individual << '\n'; 
    cout << team << '\n';
    
    return 0;
}
