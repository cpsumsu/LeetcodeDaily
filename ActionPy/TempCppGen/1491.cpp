#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <functional>
#include <limits.h>
#include <unordered_set>
#include <map>
#include <bitset>
#include <queue>
#include <stack>
#include <set>
#include <string.h>
#include <numeric>
#include <cassert>
#include <cmath>
#include <cstdint>
using namespace std;


class Solution_a {
public:
    double average(vector<int>& salary) {
        int mx = INT_MIN, mn = INT_MAX, s = 0;
        for (int i = 0; i < salary.size(); ++i) mx = max(salary[i], mx), mn = min(salary[i], mn), s += salary[i];
        return (double)(s - mx - mn) / (double)(salary.size() - 2);
    }
};
int main()
{
   return 0;
}