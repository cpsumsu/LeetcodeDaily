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
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>m, mm;
        for (auto a : arr) m[a]++;
        for (auto& [u, v] : m)
        {
            if (mm[v]) return false;
            mm[v]++;
        }
        return true;
    }
};
int main()
{
   return 0;
}