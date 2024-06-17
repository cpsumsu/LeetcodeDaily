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
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int vis[1001] = {0};
        for (auto t : trips)
        {
            vis[t[1]] += t[0];
            vis[t[2]] -= t[0];
        }
        int ans = 0;
        for (auto a : vis)
        {
            ans += a;
            if (ans > capacity) return false;
        }
        return true;
    }
};
int main()
{
   return 0;
}