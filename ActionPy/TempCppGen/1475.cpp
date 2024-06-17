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
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> ans(n, 0);
        stack<int> st;
        for (int i = n - 1; i >= 0; --i)
        {
            ans[i] = prices[i];
            while(!st.empty() && prices[i] < prices[st.top()])
                st.pop();
            if (!st.empty())
                ans[i] -= prices[st.top()];
            st.push(i);
        }
        return ans;
    }
};
int main()
{
   return 0;
}