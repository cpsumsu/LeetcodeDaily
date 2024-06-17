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
    vector<int> findArray(vector<int>& pref) {
        vector<int> ans(pref.size(), 0); 
        ans[0] = pref[0];
        for (int i = 1; i < pref.size(); ++i) 
            ans[i] = pref[i - 1] ^ pref[i];
        return ans;
    }
};
int main()
{
   return 0;
}