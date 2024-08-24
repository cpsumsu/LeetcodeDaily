#include <iostream>
#include <climits>
#include <vector>
#include <unordered_map>
#include <sstream>
#include <map>
#include <queue>
#include <set>
#include <cstring>
#include <stack>
#include <list>
#include <deque>
#include <cmath>
#include <fstream>
#include <algorithm>
#include <numeric>
#include <cstdint>
using namespace std;

template<typename A, typename B> ostream &operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename = enable_if_t<!is_same_v<string, T_container>, typename T_container::value_type>> ostream &operator<<(ostream &os, const T_container &arg) { for (const auto &x : arg) os << x << ' '; return os; } 

template <typename> struct is_tuple: std::false_type {};
template <typename ...T> struct is_tuple<std::tuple<T...>>: std::true_type {};
template<typename T> void tuple_out(T &&t) { apply([](auto &&...arg) { ((cout << arg << ' '), ...) << '\n'; }, t); }

template <typename T> void _deduce(T arg) { if constexpr (is_tuple<T>::value) { tuple_out(arg); } else { cerr << arg << ' '; } }
template<typename... Arg> void println(Arg&&... args) { (_deduce(args), ...); cerr << '\n'; }


void run_case() {
	int N;
	cin >> N;
	queue<int> q;

	for (int i = 1; i <= N; i++)
		q.push(i);

	vector<int> sol;
	bool flag = false;

	while (q.size()) {
		int x = q.front();
		q.pop();

		if (flag)
			sol.push_back(x);
		else
			q.push(x);
		flag ^= true;
	}

	cout << sol << '\n';
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(0);

 	run_case();   

    return 0;
}