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
    int minimumPossibleSum(int n, int target) {
        long long m = min(target / 2, n);
        int ans = (m * (m + 1) + (n - m - 1 + target * 2) * (n - m)) / 2 % 1'000'000'007;
        return ans;
    }
};
int main()
{
   return 0;
}