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
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        unordered_map<int,pair<int,int>> mp;
        int m = mat.size(), n = mat[0].size();
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n;++j)
                mp[mat[i][j]] = {i,j};
        vector<int> row(m), col(n);
        for (int i = 0; i < arr.size(); ++i)
        {
            auto it = mp[arr[i]];
            ++row[it.first];
            ++col[it.second];
            if (row[it.first] == n || col[it.second] == m) return i;
        }
        return -1;
    }
};
int main()
{
   return 0;
}