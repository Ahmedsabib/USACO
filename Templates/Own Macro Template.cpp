#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
 
// pairs
typedef pair<int, int> pi;
typedef pair<long long, long long> pl;
typedef pair<long double, long double> pd;
 
// vectors
typedef vector<int> vi;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<pd> vpd;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<long long> vl;
typedef vector<long double> vd;
typedef vector<vector<int>> vvi;
typedef vector<vector<long long>> vvl;
 
// sets
typedef set<int> si;
typedef set<long long> sl;
typedef set<long double> sd;
 
// maps
typedef map<int, int> mpi;
typedef map<char, int> mpc;
typedef map<long long, long long> mpl;
typedef map<long double, long double> mpd;
 
// containers
typedef queue<int> qi;
typedef deque<int> dqi;
typedef stack<int> sti;
typedef queue<char> qc;
typedef deque<char> dqc;
typedef stack<char> stc;
typedef queue<string> qs;
typedef deque<string> dqs;
typedef stack<string> sts;
typedef priority_queue<int> pqi;
typedef priority_queue<char> pqc;
typedef priority_queue<string> pqs;
 
// iterators
#define trav(a, x) for (auto& a: x)
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define R0F(i, a) for (int i = a-1; i >= 0; i--)
#define REP(i, a, b) for (int i = a; i < (b); i++)
#define PER(i, a, b) for (int i = b-1; i >= (a); i--)
#define FOR(i, a, b, x) for (int i = a; i < b; i += x)
#define ROF(i, a, b, x) for (int i = a-1; i >= (b); i -= x)
 
// useful macros
#define str string
#define rsz resize
#define ins insert
#define F first
#define S second
#define MP make_pair
#define PB push_back
#define PF push_front
#define LB lower_bound
#define UB upper_bound
#define EB emplace_back
#define bk back()
#define ft front()
#define bg(x) begin(x)
#define sz(x) int((x).size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
 
// constants limit
const int MOD = 1e9+7;
const int MAX = 100001;
const ll INF = 1e18;
 
/*
* Find my template here 
* https://github.com/Ahmedsabib/USACO/blob/main/Templates/Own%20Macro%20Template.cpp
*/
 
// macros for reading inputs and printing outputs of the problem
namespace io {
    // io template taken from bqi343
    // INPUT
    void re(double& x) { string t; cin >> t; x = stod(t); } 
    void re(ld& x) { string t; cin >> t; x = stold(t); }
    template<class T> void re(T& x) { cin >> x; }
    template<class Arg, class... Args> void re(Arg& first, Args&... rest) { 
        re(first); re(rest...); 
    }
    template<class T1, class T2> istream& operator>>(istream& is, pair<T1,T2>& p) {
        is >> p.f >> p.s; return is;
    }
    template<class T> istream& operator>>(istream& is, vector<T>& a) {
        F0R(i,sz(a)) is >> a[i];
        return is;
    }
 
    // OUTPUT
    template<class T> void pr(const T& x) { cout << x << '\n'; }
    template<class Arg, class... Args> void pr(const Arg& first, const Args&... rest) { 
        cout << first << ' '; pr(rest...); 
    }
    template<class T1, class T2> ostream& operator<<(ostream& os, const pair<T1,T2>& a) {
        os << '{' << a.f << ", " << a.s << '}'; return os;
    }
    template<class T> ostream& operator<<(ostream& os, const vector<T>& a) {
        F0R(i,sz(a)) {
            os << a[i] << ' ';
        }
        return os;
    }
}
 
using namespace io;

void solve() {
    
    // TODO: make sure all variable get reset.
}

int main() {
    ios_base::sync_with_stdio(false);  // fast input-output
    cin.tie(nullptr);

    int TC; re(TC);
    while(TC--) {
        solve();  // let's solve this problem!
    }

    return 0;
}
// 10 Steps to Solve Any Problems:
// 1.Read the problem completely at least two or three times (or however many makes you feel comfortable)
// 2.Identify the subject, the problem belongs to. Is it a sorting or pattern matching problem? 
//   Can I use graph theory? Is it related to number theory? etc.
// 3.Try to solve the problem manually by considering 3 or 4 sample data sets.
// 4.After concentrate on optimizing the manual steps. Try to make it as simple as possible.
// 5.Write to write pseudo-code and comments besides the code from the manual steps. 
//   One thing you can do is to check after every function is written. Use a good IDE with a debugger, if possible. 
//   Don’t need to think much about the syntax. Just focus on the logic and steps.
// 6.Replace the comments or pseudo-code with real code. 
//   Always check if the values and code are behaving as expected before moving to the new line of pseudo-code.
// 7.Then optimize the real code.
// 8.Take care of boundary conditions as well.
// 9.Get feedback from your teammates, professors, and other developers and also ask your question on Stack Overflow if possible. 
//   Try to learn from others’ guidelines and what they are handling those problems. A problem may be solved in several ways. 
//   So, don’t get disappointed if you can’t think like an expert. 
//   You need to stick to the problem and you will gradually become better and quicker in solving problems like others.
// 10.Practice, Practice, and Practice.
 
// ----------------------------------------------------- code ends here ----------------------------------------------------------
