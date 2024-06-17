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
    long long numberOfWeeks(vector<int>& milestones) {
        long long mx = -1, s = 0, mxd = 1, n = milestones.size();
        for (int i = 0; i < milestones.size(); ++i)
        {
            s += milestones[i];
            if (milestones[i] == mx)
            {
                mxd++;
            }
            else if (milestones[i] > mx)
            {
                mx = (long long)milestones[i];
                mxd = 1;
            }
        }
        if (mxd != 1) return s;
        return mx > s - mx + 1 ? (s - mx) * 2 + 1: s; 
    }
};
int main()
{
   return 0;
}