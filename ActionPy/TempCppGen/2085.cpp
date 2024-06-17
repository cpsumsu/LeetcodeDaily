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
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> um1, um2;
        int ans = 0;
        for (auto a : words1)
            um1[a]++;
        for (auto b : words2)
            um2[b]++;
        for (auto [u,v] : um1)
            if (v == 1 && um2[u] == 1) ans++;
        return ans;
    }
};
int main()
{
   return 0;
}