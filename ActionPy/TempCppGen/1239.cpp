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
    int maxLength(vector<string>& arr) {
        vector<bitset<26>> dp {bitset<26>()};

        int res = 0;
        for (auto &x : arr) {
            bitset<26> tmp;

            for (char y : x)
                tmp.set(y - 'a');
            
            int n = tmp.count();
            if (n < x.size()) continue;

            for (int i = 0; i < dp.size(); i++) {
                bitset c = dp[i];
                if ((c & tmp).any()) continue;

                dp.push_back(c | tmp);
                res = max(res, (int)c.count() + n);
            }
        }   

        return res;
    }
};
int main()
{
   return 0;
}