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
    long long countSubarrays(vector<int>& nums, int k) {
        int m = *max_element(nums.begin(), nums.end());
        int64_t start = 0, ans = 0;

        for (int end = 0; end < nums.size(); end++) {
            if (nums[end] == m)
                k--;

            while (!k) {
                if (nums[start] == m)
                    k++;
                start++;
            }

            ans += start;
        }

        return ans;
    }
};
int main()
{
   return 0;
}