#include <bits/stdc++.h>

std::string animals[12] = {"Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig", "Rat"};

std::map<std::string, int64_t> born;

std::string get_animal(int64_t year){

    int64_t a = 0, y = 2021;
    while(y < year){
        ++a;
        ++y;
        if(a == 12){
            a = 0;
        }
    }
    while(y > year){
        --a;
        --y;
        if(a == -1){
            a = 11;
        }
    }
    return animals[a];
}


int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int64_t N; cin >> N;
    born["Bessie"] = 2021;
    for(int i = 0; i < N; ++i){
        string first, second, third, fourth, fifth, sixth, seventh, eighth;
        cin >> first >> second >> third >> fourth >> fifth >> sixth >> seventh >> eighth;
        born[first] = born[eighth];
        do{
            if(fourth == "previous") born[first]--;
            else born[first]++;
        } while(get_animal(born[first]) != fifth);
    }
    int64_t diff = abs(born["Bessie"] - born["Elsie"]);
    cout << diff << '\n';
    
    return 0;
}
