#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace std;
using namespace __gnu_pbds;

using ll = long long;
using ld = long double;
using str = string;

// pairs
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using pd = pair<ld, ld>;

// templates for macro ds
template <class T> using SET = set<T>;
template <class T> using QUE = queue<T>;
template <class T> using STK = stack<T>;
template <class T> using DEQ = deque<T>;
template <class T> using VEC = vector<T>;
template <class T> using VEC_V = vector<vector<T>>;
template <class T> using PRI_QUE = priority_queue<T>;
template <class T, size_t SZ> using AR = array<T, SZ>;
template <class T1, class T2> using MAP = map<T1, T2>;
template <class T1, class T2> using MAP_VEC = map<T1, vector<T2>>;
template <class T> using PRIO_QUE = priority_queue<T, vector<T>, greater<T>>;

// vectors
using vi = VEC<int>;
using vb = VEC<bool>;
using vc = VEC<char>;
using vl = VEC<ll>;
using vd = VEC<ld>;
using vs = VEC<str>;
using vpi = VEC<pii>;
using vpl = VEC<pll>;
using vpd = VEC<pd>;
using vvi = VEC_V<int>;
using vvl = VEC_V<ll>;
using vvd = VEC_V<ld>;
using vvs = VEC_V<str>;

// sets
using si = SET<int>;
using sc = SET<char>;
using sl = SET<ll>;
using sd = SET<ld>;
using ss = SET<str>;

// maps
using mpi = MAP<int, int>;
using mpc = MAP<char, int>;
using mpl = MAP<ll, ll>;
using mpd = MAP<ld, ld>;
using mpv = MAP<ll, vl>;

// containers
using qi = QUE<int>;
using ql = QUE<ll>;
using qc = QUE<char>;
using qs = QUE<str>;
using dqi = DEQ<int>;
using dql = DEQ<ll>;
using dqc = DEQ<char>;
using dqs = DEQ<str>;
using sti = STK<int>;
using stll = STK<ll>;
using stc = STK<char>;
using sts = STK<str>;
using minpqi = PRIO_QUE<int>;
using minpql = PRIO_QUE<ll>;
using minpqc = PRIO_QUE<char>;
using minpqs = PRIO_QUE<str>;
using minpii = PRI_QUE<pii>;
using maxpqi = PRI_QUE<int>;
using maxpql = PRI_QUE<ll>;
using maxpqc = PRI_QUE<char>;
using maxpqs = PRI_QUE<str>;
 
// iterators
#define trav(a, x) for (auto& a: x)
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define R0F(i, a) for (int i = a-1; i >= 0; i--)
#define REP(i, a, b) for (int i = a; i < (b); i++)
#define PER(i, a, b) for (int i = b-1; i >= (a); i--)
#define FOR(i, a, b, x) for (int i = a; i < b; i += x)
#define ROF(i, a, b, x) for (int i = a-1; i >= (b); i -= x)
 
// useful macros
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
#define fprec fixed << setprecision

// for every grid problems
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

// bitwise operations
const int set_bit(int x, int pos) {return x = x | (1 << pos);}
const int reset_bit(int x, int pos) {return x = x & ~(1 << pos);}
const int check_bit(int x, int pos) {return (x & (1 << pos));}
constexpr int pct(int x) {return __builtin_popcount(x);}  // # of bits set
constexpr int bits(int x) {return x == 0 ? 0 : 31 - __builtin_clz(x);}  // floor(log2(x))

// constants limit
const ll INF = 1e18;
const int MAX = 200005;
const int MOD = 1e9 + 7;
const ld PI = acos((ld)-1);

// templates for long codes
template <class T> void rem_dup(vector<T> &v) {  // sort and remove duplicates
  sort(all(v));
  v.erase(unique(all(v)), end(v));
}
template <class T, class U> void safeErase(T &t, const U &u) {
  auto it = t.find(u);
  assert(it != end(t));
  t.erase(it);
}

// namespace FileIO template taken from bqi343
inline namespace FileIO {
  void setIn(str s) { freopen(s.c_str(), "r", stdin); }
  void setOut(str s) { freopen(s.c_str(), "w", stdout); }
  void setIO(str s = "") {
    cin.tie(0)->sync_with_stdio(0);  // unsync C / C++ I/O streams
    cout << fixed << setprecision(12);
    // cin.exceptions(cin.failbit);
    // throws exception when do smth illegal
    // ex. try to read letter into int
    if (sz(s)) setIn(s + ".in"), setOut(s + ".out");  // for old USACO
  }
}

/*
* Find my template here 
* https://github.com/Ahmedsabib/USACO/blob/main/Templates/Own%20Macro%20Template.cpp
*/

template <typename T>
using indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
mt19937 rng((uint32_t)chrono::steady_clock::now().time_since_epoch().count());
 
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

void solve(int tc) {
  // TODO: make sure all variable get reset.
}

int main() {
  setIO();  // fast input-output

  int TC; re(TC);
  REP(i, 1, TC + 1) solve(i); // let's solve this problem!
  
  #ifdef LOCAL
    auto end = std::chrono::high_resolution_clock::now();
    cerr << fprec(10);
    cerr << "Execution time: " << std::chrono::duration_cast<std::chrono::duration<ld>>(end - begin).count() << " seconds" << '\n';
  #endif

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
